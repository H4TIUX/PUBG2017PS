-- UEHelpers = require("UEHelpers")
-- local UWorld = UEHelpers.GetWorld()

---@type ATslGameState
GameState = nil
---@type UWorld
World = nil
---@type ATslGameMode
GameMode = nil
---@type UGameplayStatics
GamePlayStatics = nil
---@type UAirborneMatchPreparer
AirbroneMatchPreparer = nil
---@type ATransportAircraftVehicle
GlobalTransportAirplane = nil
---@type UTask_GasWarning_C
TaskGasWarning = nil
---@type UTask_GasRelease_C
TaskGasRelease = nil
IsServer = false
LastWarningTime = 0
LastReleaseTime = 0
FNameAvailablie = false

GameStarted = false
GameEnded = false

Debug = true

ZERO_VECTOR = {
    ["X"] = 0.0,
    ["Y"] = 0.0,
    ["Z"] = 0.0
}

ZERO_ROTATION = {
    ["Pitch"] = 0.0,
    ["Yaw"] = 0.0,
    ["Roll"] = 0.0
}

function FRotator(Pitch, Yaw, Roll)
    return {
        ["Pitch"] = Pitch,
        ["Yaw"] = Yaw,
        ["Roll"] = Roll
    }
end

function FVector(X, Y, Z)
    return {
        ["X"] = X,
        ["Y"] = Y,
        ["Z"] = Z
    }
end

function DisableCullingForAllActors(World)
    World.StreamingLevels:ForEach(function (index, param)
        local streamLevel = param:get()
        local levelName = tostring(streamLevel:GetFullName())
        -- print("Iterating Level: " .. levelName)

        if string.find(levelName, "327") then
            goto continue
        end

        if string.find(levelName, "328") then
            goto continue
        end

        if string.find(levelName, "329") then
            goto continue
        end

        if string.find(levelName, "326") then
            goto continue
        end

        if string.find(levelName, "325") then
            goto continue
        end

        if string.find(levelName, "324") then
            goto continue
        end

        if string.find(levelName, "323") then
            goto continue
        end

        if string.find(levelName, "322") then
            goto continue
        end

        if string.find(levelName, "321") then
            goto continue
        end

        if string.find(levelName, "320") then
            goto continue
        end

        if string.find(levelName, "332") then
            goto continue
        end

        -- enable these levels
        streamLevel.bShouldBeLoaded = true;
        streamLevel.bShouldBeVisible = true;
        streamLevel.bDisableDistanceStreaming = true;
        streamLevel.bShouldBlockOnLoad = true;
        ::continue::
    end)
end

function Init()
    print("=== OG Server Proxy ===")
    print("Checking FName Availbility...")
    print("if this fails, delete the next line in the lua file and restart the server")
    -- if FName not available, delete the next line
    local fname = FName("Testing")
    if (fname ~= nil) then
        FNameAvailablie = true
    end
    -- start init game
    RegisterInitGameStatePostHook(function(gameMode)
        print("GameMode = " .. tostring(gameMode:get():GetFullName()))
        local mode = gameMode:get()
        mode.PlayerRespawn = true
        -- setup the warmup time
        mode.WarmupTime = 200
        mode.bCanAllSpectate = true
        mode.MultiplierBlueZone = 1
        -- Set the match to Airbrone
        mode.MatchStartType = 1
        -- mode.NumBots = 30

        local static = StaticFindObject("/Script/Engine.GameplayStatics")
        local world = FindFirstOf("World")

        GamePlayStatics = static:GetCDO()
        print("GamePlayStatics: " .. tostring(static:GetCDO():GetFullName()))

        print(tostring(world) .. ", name=" .. tostring(world:GetFullName()))
        LoopAsync(100, function()

                    DisableCullingForAllActors(world)

            -- print(tostring(world.GameState:GetFullName()))
            if world.GameState:GetFullName() == nil then
                print("Waiting for GameState to be valid...")
                return false
            else

                print("state= " .. tostring(world.GameState:GetFullName()))
                -- world.GameState.RemainingTime = 3600

                -- Init the gamestate
                ---@type ATslGameState
                GameState = world.GameState
                GameState.bIsTeamMatch = true
                World = world

                GameMode = mode
                print("GameMode: " .. tostring(GameMode:GetFullName()))

                local serverPlayer = FindFirstOf("TslPlayerController")
                if serverPlayer:IsValid() and serverPlayer:HasAuthority() then

                    print("We are a server, continue to do our stuff")
                    GlobalTransportAirplane = SpawnAircraft()
                    GlobalTransportAirplane:EnterAtEjectionArea()
                    -- SpawnTestingPlayerPawn()
            
                    LoopAsync(100, function()
                        -- print("Spawning Bot...")
                        -- serverPlayer.CheatManager:SpawnBot()
                        if (GameState ~= nil) then
                            if (GameState.TotalWarningDuration ~= 0) then
                                if (GameState.TotalWarningDuration ~= LastWarningTime) then
                                    print("WarningDuration is changed, teleporting plane to the BlueZone center...")
                                    GlobalTransportAirplane:K2_TeleportTo(FVector(GameState.PoisonGasWarningPosition.X, GameState.PoisonGasWarningPosition.Y, AirbroneMatchPreparer.AircraftAltitude), ZERO_ROTATION)
                                    print("WarningDuration is " .. tostring(GameState.TotalWarningDuration) 
                                    .. "s, Fixing BlueZone Duration to " .. tostring(GameState.TotalWarningDuration / 2) .. "s...")
                                    GameState.TotalWarningDuration = GameState.TotalWarningDuration / 2
                                    if (TaskGasWarning ~= nil) then
                                        TaskGasWarning.TotalRemainDuration = GameState.TotalWarningDuration
                                        TaskGasWarning.RemainDuration = GameState.TotalWarningDuration
                                    end
                                    LastWarningTime = GameState.TotalWarningDuration
                                end
                            end

                            if (GameState.TotalReleaseDuration ~= 0) then
                                if (GameState.TotalReleaseDuration ~= LastReleaseTime) then
                                    print("Gas is released, eject all players..")
                                    DropoutPlayerInAirplane()
                                    print("ReleaseDuration is " .. tostring(GameState.TotalReleaseDuration) 
                                    .. "s, Fixing RedZone Duration to " .. tostring(GameState.TotalReleaseDuration / 2) .. "s...")
                                    GameState.TotalReleaseDuration = GameState.TotalReleaseDuration / 2
                                    LastReleaseTime = GameState.TotalReleaseDuration
                                end
                            end

                            if (TaskGasRelease ~= nil) then
                                TaskGasRelease.TotalDuration = GameState.TotalReleaseDuration
                            end
                        end
                        return false
                    end)
                else
                    print("We are a client")
                end

                return true
            end
        end)
    end)
end

-- Not working
function SpawnTestingPlayerPawn()
    local static = GamePlayStatics
    local world = World
    local botControllerClass = StaticFindObject("/Script/TslGame.TslBotAIController")
    local defaultBot = StaticFindObject("/Script/TslGame.Default__TslBot")
    local playerStateClass = StaticFindObject("/Script/TslGame.TslPlayerState")

    print("botControllerClass: " .. tostring(botControllerClass:GetFullName()))
    print("defaultPawn: " .. tostring(defaultBot:GetFullName()))

    -- mode.PlayerControllerClass = botControllerClass

    ---@type ATslBotAIController
    local controller = world:SpawnActor(botControllerClass, {
        ["X"] = 338062.06,
        ["Y"] = 170761.37,
        ["Z"] = 2200.10
    },{
        ["Pitch"] = 0.0,
        ["Yaw"] = 0.0,
        ["Roll"] = 0.0
    })

    print("controller = " .. tostring(controller:GetFullName()))

    ---@type ATslCharacter
    local pawn = world:SpawnActor(defaultBot:GetClass(), {
        ["X"] = 338062.06,
        ["Y"] = 170761.37,
        ["Z"] = 2200.10
    },{
        ["Pitch"] = 0.0,
        ["Yaw"] = 0.0,
        ["Roll"] = 0.0
    })

    print("pawn = " .. tostring(pawn:GetFullName()))

    controller:Possess(pawn)

    -- ---@type ATslBotAIController
    -- local bot = static:SpawnObject(botControllerClass:GetClass(), world.PersistentLevel)

    -- print("bot = " .. tostring(bot:GetFullName()))

    -- ---@type ATslPlayerState
    -- local playerState = static:SpawnObject(playerStateClass:GetClass(), world.PersistentLevel)

    -- print("playerState = " .. tostring(playerState:GetFullName()))

    -- bot.Pawn = pawn
    -- bot.PlayerState = playerState
    -- pawn.Controller = bot

    -- pawn:K2_TeleportTo({
    --     ["X"] = 338062.06,
    --     ["Y"] = 170761.37,
    --     ["Z"] = 2200.10
    --     },
    --     {
    --         ["Pitch"] = 0.0,
    --         ["Yaw"] = 0.0,
    --         ["Roll"] = 0.0
    --     }
    -- )

    -- print("pawn: x=" .. tostring(pawn:GetTransform().Translation.X) .. ", y=" .. tostring(pawn:GetTransform().Translation.Y) .. ", z=" .. tostring(pawn:GetTransform().Translation.Z))
end

--- Get all player pawn instance
--- @return table<ATslCharacter> | nil
function GetAllPlayerPawns()
    local playerPawns = {}
    if (GameState ~= nil) then
        GameState.PlayerArray:ForEach(function(index, param)
            local playerPawn = param:get().Owner.Pawn
            playerPawns[index] = playerPawn
            end)
        return playerPawns
    else
        print("GameState is nil")
        return nil
    end
end

--- Get all player controller instance
--- @return table<ATslPlayerController> | nil
function GetAllPlayerControllers()
    local playerPawns = {}
    if (GameState ~= nil) then
        GameState.PlayerArray:ForEach(function(index, param)
            local playerPawn = param:get().Owner
            playerPawns[index] = playerPawn
            end)
        return playerPawns
    else
        print("GameState is nil")
        return nil
    end
end

--- Get all player state instance
--- @return table<ATslPlayerState> | nil
function GetAllPlayerStates()
    local playerPawns = {}
    if (GameState ~= nil) then
        GameState.PlayerArray:ForEach(function(index, param)
            local playerPawn = param:get()
            playerPawns[index] = playerPawn
            end)
        return playerPawns
    else
        print("GameState is nil")
        return nil
    end
end

function TeleportPlayersToStartPoint()
    local pawns = GetAllPlayerPawns()
    if (pawns ~= nil) then
        print("Teleporting players to start point")
        for i = 1, #pawns do
            local pawn = pawns[i]
            print("Teleporting player " .. pawn:GetFullName())
            pawn:K2_TeleportTo({
                ["X"] = 338062.06,
                ["Y"] = 170761.37,
                ["Z"] = 2200.10
                },
                {
                    ["Pitch"] = 0.0,
                    ["Yaw"] = 0.0,
                    ["Roll"] = 0.0
                })
        end
    end
end

function DropoutPlayerInAirplane()
    if (GlobalTransportAirplane ~= nil and GlobalTransportAirplane:IsValid()) then
        print("Dropout player in airplane!!!!")
        local seats = GlobalTransportAirplane.VehicleSeatComponent:GetSeats()
            -- print("Seats = " .. tostring(seats))
            for index, seatparam in pairs(seats) do
                ---@type UVehicleSeatInteractionComponent
                local seat = seatparam:get()
                if (seat:IsValid() and (seat.Rider:IsValid() == true)) then
                    print("Found a valid seat #" .. index .. ", trying to drop player on aircraft...")
                    GlobalTransportAirplane.VehicleSeatComponent:Leave(seat.Rider, seat, false)
                    seat.Rider:ResetParachute()
                    seat.Rider:SendSystemMessage(2, FText("Dropping!"))
                end
            end
    end
    
end

---@return ATransportAircraftVehicle | nil
--- Spawn an aircraft
function SpawnAircraft()
    if (GameMode ~= nil) then
        -- Spawn the preparer
        if (AirbroneMatchPreparer == nil) then
            ---@type UClass
            local AirbronePreparerClass = GameMode.MatchPreparerClasses[2].Class
            print("AirbronePreparerClass is " .. AirbronePreparerClass:GetFullName())
            AirbroneMatchPreparer = GamePlayStatics:SpawnObject(AirbronePreparerClass, World.PersistentLevel)
        end

        print("preparer = " .. AirbroneMatchPreparer:GetFullName())
        print("aircraft Class = " .. AirbroneMatchPreparer.AircraftClass:GetFullName())

        -- Spawn the aircraft
        local aircraft = World:SpawnActor(AirbroneMatchPreparer.AircraftClass, {
            ["X"] = 338062.06,
            ["Y"] = 170761.37,
            ["Z"] = AirbroneMatchPreparer.AircraftAltitude
            }, {
                ["Pitch"] = 0.0,
                ["Yaw"] = 0.0,
                ["Roll"] = 0.0
            })
        print("Aircraft spawned: " .. tostring(aircraft:IsValid()) .. "Aircraft = " .. aircraft:GetFullName())
        return aircraft
    else
        print("GameMode is nil")
        return nil
    end
end

function Hook_K2_OnRestartPlayer(object, func, param)
    local player = param:get()
    print("K2_OnRestartPlayer::before" .. player:K2_GetPawn():GetFName():ToString())
    ---@type ATslCharacter
    local playerPawn = player:K2_GetPawn()
    if (GameStarted) then
        if (GlobalTransportAirplane ~= nil and GlobalTransportAirplane:IsValid()) then
            print("Trying to spawn player on aircraft...")
            local seats = GlobalTransportAirplane.VehicleSeatComponent:GetSeats()
            -- print("Seats = " .. tostring(seats))
            for index, seatparam in pairs(seats) do
                ---@type UVehicleSeatInteractionComponent
                local seat = seatparam:get()
                if (seat:IsValid() and (seat.Rider:IsValid() == false)) then
                    print("Found a valid seat #" .. index .. ", trying to spawn player on aircraft...")
                    GlobalTransportAirplane.VehicleSeatComponent:Ride(playerPawn, seat)
                    seat.Rider = playerPawn
                    -- playerPawn.
                    return
                end
            end
        else
        player:K2_GetPawn():K2_TeleportTo({
            ["X"] = 338062.06,
            ["Y"] = 170761.37,
            ["Z"] = 2200.10
            },
            {
                ["Pitch"] = 0.0,
                ["Yaw"] = 0.0,
                ["Roll"] = 0.0
            })
        end
    else
        if (Debug) then
            player:K2_GetPawn():K2_TeleportTo({
                ["X"] = 338062.06,
                ["Y"] = 170761.37,
                ["Z"] = 2200.10
                },
                {
                    ["Pitch"] = 0.0,
                    ["Yaw"] = 0.0,
                    ["Roll"] = 0.0
                })
        end
    end
end


-- local teamClass = StaticFindObject("/Script/TslGame.Team")
-- print("TeamClass is " .. teamClass:GetFullName())
-- local team = StaticConstructObject(teamClass:GetClass(), player:K2_GetPawn().Team)
-- if (team ~= nil) then
--     print("Team is not nil, team = " .. team:GetFullName() .. " player = " .. tostring(player:K2_GetPawn().Team))
-- end
-- player:K2_GetPawn().Team = {
--     ["PlayerLocation"] = {
--         ["X"] = 0.0,
--         ["Y"] = 0.0,
--         ["Z"] = 0.0
--     },
--     ["PlayerRotation"] = {
--         ["Yaw"] = 0.0,
--         ["Pitch"] = 0.0,
--         ["Roll"] = 0.0
--     },
--     ["PlayerName"] = "Player",
--     ["Health"] = 100,
--     ["HealthMax"] = 100,
--     ["GroggyHealth"] = 100,
--     ["GroggyHealthMax"] = 100,
--     ["MapMarkerPosition"] = {
--         ["X"] = 0.0,
--         ["Y"] = 0.0
--     },
--     ["bIsDying"] = false,
--     ["bIsGroggying"] = false,
--     ["bQuitter"] = false,
--     ["bShowMapMarker"] = false,
--     ["TeamVehicleType"] = 0,
--     ["BoostGauge"] = 0,
--     ["MemberNumber"] = 1,
--     ["TslCharacter"] = player:K2_GetPawn(),
--     ["UniqueId"] = "114514"
-- }

function Hook_GameStarted()
    -- GameStarted, we are going to find the Task_GasWarning and Task_GasRelease to fix the problem
    local taskGasWarningList = FindAllOf("Task_GasWarning_C")
    if not taskGasWarningList then
        print("Task_GasWarning_C not found")
        return
    else
        ---@param taskGasWarning UTask_GasWarning_C
        for _, taskGasWarning in ipairs(taskGasWarningList) do
            if (taskGasWarning.ActorOwner:IsValid()) then
                print("Task_GasWarning_C found, name = " .. taskGasWarning:GetFullName() .. ", ActorOwner = " .. taskGasWarning.ActorOwner:GetFullName())
                TaskGasWarning = taskGasWarning
            end
        end
    end

    local taskGasReleaseList = FindAllOf("Task_GasRelease_C")
    if not taskGasReleaseList then
        print("Task_GasRelease_C not found")
        return
    else
        ---@param taskGasRelease UTask_GasRelease_C
        for _, taskGasRelease in ipairs(taskGasReleaseList) do
            if (taskGasRelease.ActorOwner:IsValid()) then
                print("Task_GasRelease_C found, name = " .. taskGasRelease:GetFullName() .. ", ActorOwner = " .. taskGasRelease.ActorOwner:GetFullName())
                TaskGasRelease = taskGasRelease
            end
        end
    end

end

function Hook_K2_OnSetMatchState(object, func, param)
    local state = param:get():ToString()
    print("K2_OnSetMatchState::before, state=" .. state)

    if state == "InProgress" then
        print("Game is in progress, we can start our stuff")
        GameStarted = true
        Hook_GameStarted()
        -- TeleportPlayersToStartPoint()
    end

    if state == "WaitingPostMatch" then
        print("Game Ended.Do Restarting...")
        GameEnded = true
        if (GameMode ~= nil) then
            -- GameMode:RestartGame()
        end
    end
end

Init()






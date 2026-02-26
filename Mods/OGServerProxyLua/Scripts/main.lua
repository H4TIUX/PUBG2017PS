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
IsServer = true
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
    World.StreamingLevels:ForEach(
        function(index, param)
            local streamLevel = param:get()
            local levelName = tostring(streamLevel:GetFullName())
			
		    if string.find(levelName, "320") then
                goto continue
            end
			
		    if string.find(levelName, "321") then
                goto continue
            end

            if string.find(levelName, "322") then
                goto continue
            end

            if string.find(levelName, "323") then
                goto continue
            end

            if string.find(levelName, "324") then
                goto continue
            end

            if string.find(levelName, "325") then
                goto continue
            end

            if string.find(levelName, "326") then
                goto continue
            end

            if string.find(levelName, "327") then
                goto continue
            end

            if string.find(levelName, "328") then
                goto continue
            end

            if string.find(levelName, "329") then
                goto continue
            end

            if string.find(levelName, "330") then
                goto continue
            end

            if string.find(levelName, "331") then
                goto continue
            end

            if string.find(levelName, "332") then
                goto continue
            end

            -- enable these levels
            streamLevel.bShouldBeLoaded = true
            streamLevel.bShouldBeVisible = true
            streamLevel.bDisableDistanceStreaming = true
            streamLevel.bShouldBlockOnLoad = true
            ::continue::
			
        end
    )
end

function Init()
    print("=== OG Server Proxy ===\n")
    print("Checking FName Availbility...\n" )
    print("if this fails, delete the next line in the lua file and restart the server\n")
    -- if FName not available, delete the next line
    local fname = FName("Testing")
    if (fname ~= nil) then
        FNameAvailablie = true
    end
    -- start init game
    RegisterInitGameStatePostHook(
        function(gameMode)
            print("GameMode = " .. tostring(gameMode:get():GetFullName()) .. "\n")
            local mode = gameMode:get()
            mode.PlayerRespawn = true
            -- setup the warmup time
            mode.WarmupTime = 200
            mode.bCanAllSpectate = false
            mode.MultiplierBlueZone = 1
            -- Set the match to Airbrone
            mode.MatchStartType = 1

            local static = StaticFindObject("/Script/Engine.GameplayStatics")
            local world = FindFirstOf("World")

            GamePlayStatics = static:GetCDO()
            print("GamePlayStatics: " .. tostring(static:GetCDO():GetFullName()) .. "\n")

            print(tostring(world) .. ", name=" .. tostring(world:GetFullName()) .. "\n")
            LoopAsync(
                100,
                function()
                    DisableCullingForAllActors(world)

                    if world.GameState:GetFullName() == nil then
                        print("Waiting for GameState to be valid...")
                        return false
                    else
                        print("state= " .. tostring(world.GameState:GetFullName()) .. "\n")

                        -- Init the gamestate
                        ---@type ATslGameState
                        GameState = world.GameState
                        GameState.bIsTeamMatch = true
                        World = world

                        GameMode = mode
                        print("GameMode: " .. tostring(GameMode:GetFullName()) .. "\n")

                        local serverPlayer = FindFirstOf("TslPlayerController")
                        if serverPlayer:IsValid() and serverPlayer:HasAuthority() then
                            print("We are a server, continue to do our stuff\n")
                            GlobalTransportAirplane = SpawnAircraft()
                            GlobalTransportAirplane:EnterAtEjectionArea()
                            -- SpawnTestingPlayerPawn()

                            LoopAsync(
                                100,
                                function()
                                    -- print("Spawning Bot...")
                                    -- serverPlayer.CheatManager:SpawnBot()
                                    if (GameState ~= nil) then
                                        if (GameState.TotalWarningDuration ~= 0) then
                                            if (GameState.TotalWarningDuration ~= LastWarningTime) then
                                                print(
                                                    "WarningDuration is changed, teleporting plane to the BlueZone center...\n"
                                                )
                                                GlobalTransportAirplane:K2_TeleportTo(
                                                    FVector(
                                                        GameState.PoisonGasWarningPosition.X,
                                                        GameState.PoisonGasWarningPosition.Y,
                                                        AirbroneMatchPreparer.AircraftAltitude
                                                    ),
                                                    ZERO_ROTATION
                                                )
                                                print(
                                                    "WarningDuration is " ..
                                                        tostring(GameState.TotalWarningDuration) ..
                                                            "s, Fixing BlueZone Duration to " ..
                                                                tostring(GameState.TotalWarningDuration / 2) .. "s...\n"
                                                )
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
                                                print("Gas is released, eject all players..\n")
                                                DropoutPlayerInAirplane()
                                                print(
                                                    "ReleaseDuration is " ..
                                                        tostring(GameState.TotalReleaseDuration) ..
                                                            "s, Fixing RedZone Duration to " ..
                                                                tostring(GameState.TotalReleaseDuration / 2) .. "s...\n"
                                                )
                                                GameState.TotalReleaseDuration = GameState.TotalReleaseDuration / 2
                                                LastReleaseTime = GameState.TotalReleaseDuration
                                            end
                                        end

                                        if (TaskGasRelease ~= nil) then
                                            TaskGasRelease.TotalDuration = GameState.TotalReleaseDuration
                                        end
                                    end
                                    return false
                                end
                            )
                        else
                            print("We are a client\n")
                        end

                        return true
                    end
                end
            )
        end
    )
end

-- Not working
function SpawnTestingPlayerPawn()
    local static = GamePlayStatics
    local world = World
    local botControllerClass = StaticFindObject("/Script/TslGame.TslBotAIController")
    local defaultBot = StaticFindObject("/Script/TslGame.Default__TslBot")
    local playerStateClass = StaticFindObject("/Script/TslGame.TslPlayerState")

    print("botControllerClass: " .. tostring(botControllerClass:GetFullName()) .. "\n")
    print("defaultPawn: " .. tostring(defaultBot:GetFullName()) .. "\n")

    ---@type ATslBotAIController
    local controller =
        world:SpawnActor(
        botControllerClass,
        {
            ["X"] = 338062.06,
            ["Y"] = 170761.37,
            ["Z"] = 2200.10
        },
        {
            ["Pitch"] = 0.0,
            ["Yaw"] = 0.0,
            ["Roll"] = 0.0
        }
    )

    print("controller = " .. tostring(controller:GetFullName()) .. "\n")

    ---@type ATslCharacter
    local pawn =
        world:SpawnActor(
        defaultBot:GetClass(),
        {
            ["X"] = 338062.06,
            ["Y"] = 170761.37,
            ["Z"] = 2200.10
        },
        {
            ["Pitch"] = 0.0,
            ["Yaw"] = 0.0,
            ["Roll"] = 0.0
        }
    )

    print("pawn = " .. tostring(pawn:GetFullName()) .. "\n")

    controller:Possess(pawn)

end

--- Get all player pawn instance
--- @return table<ATslCharacter> | nil
function GetAllPlayerPawns()
    local playerPawns = {}
    if (GameState ~= nil) then
        GameState.PlayerArray:ForEach(
            function(index, param)
                local playerPawn = param:get().Owner.Pawn
                playerPawns[index] = playerPawn
            end
        )
        return playerPawns
    else
        print("GameState is nil\n")
        return nil
    end
end

--- Get all player controller instance
--- @return table<ATslPlayerController> | nil
function GetAllPlayerControllers()
    local playerPawns = {}
    if (GameState ~= nil) then
        GameState.PlayerArray:ForEach(
            function(index, param)
                local playerPawn = param:get().Owner
                playerPawns[index] = playerPawn
            end
        )
        return playerPawns
    else
        print("GameState is nil\n")
        return nil
    end
end

--- Get all player state instance
--- @return table<ATslPlayerState> | nil
function GetAllPlayerStates()
    local playerPawns = {}
    if (GameState ~= nil) then
        GameState.PlayerArray:ForEach(
            function(index, param)
                local playerPawn = param:get()
                playerPawns[index] = playerPawn
            end
        )
        return playerPawns
    else
        print("GameState is nil\n")
        return nil
    end
end

function TeleportPlayersToStartPoint()
    local pawns = GetAllPlayerPawns()
    if (pawns ~= nil) then
        print("Teleporting players to start point\n")
        for i = 1, #pawns do
            local pawn = pawns[i]
            print("Teleporting player " .. pawn:GetFullName() .. "\n")
            pawn:K2_TeleportTo(
                {
                    ["X"] = 338062.06,
                    ["Y"] = 170761.37,
                    ["Z"] = 2200.10
                },
                {
                    ["Pitch"] = 0.0,
                    ["Yaw"] = 0.0,
                    ["Roll"] = 0.0
                }
            )
        end
    end
end

function DropoutPlayerInAirplane()
    if (GlobalTransportAirplane ~= nil and GlobalTransportAirplane:IsValid()) then
        print("Dropout player in airplane!!!!" .. "\n")
        local seats = GlobalTransportAirplane.VehicleSeatComponent:GetSeats()
        for index, seatparam in pairs(seats) do
            ---@type UVehicleSeatInteractionComponent
            local seat = seatparam:get()
            if (seat:IsValid() and (seat.Rider:IsValid() == true)) then
                print("Found a valid seat #" .. index .. ", trying to drop player on aircraft..." .. "\n")
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
            print("AirbronePreparerClass is " .. AirbronePreparerClass:GetFullName() .. "\n")
            AirbroneMatchPreparer = GamePlayStatics:SpawnObject(AirbronePreparerClass, World.PersistentLevel)
        end

        print("preparer = " .. AirbroneMatchPreparer:GetFullName() .. "\n")
        print("aircraft Class = " .. AirbroneMatchPreparer.AircraftClass:GetFullName() .. "\n")

        -- Spawn the aircraft
        local aircraft =
            World:SpawnActor(
            AirbroneMatchPreparer.AircraftClass,
            {
                ["X"] = 338062.06,
                ["Y"] = 170761.37,
                ["Z"] = AirbroneMatchPreparer.AircraftAltitude
            },
            {
                ["Pitch"] = 0.0,
                ["Yaw"] = 0.0,
                ["Roll"] = 0.0
            }
        )
        print("Aircraft spawned: " .. tostring(aircraft:IsValid()) .. "Aircraft = " .. aircraft:GetFullName() .. "\n")
        return aircraft
    else
        print("GameMode is nil" .. "\n")
        return nil
    end
end

function IsHostPlayer(PS, World)
    if not PS or not World then
        return false
    end
    
    local GI = World.OwningGameInstance
    if not GI or GI.LocalPlayers:Num() == 0 then
        return false
    end
    
    local LocalPC = GI.LocalPlayers[1].PlayerController
    if not LocalPC then
        return false
    end
    
    -- Host (listen server) always has PS.Owner == LocalPC
    return PS.Owner == LocalPC
end

local GPS = StaticFindObject("/Script/Engine.Default__GameplayStatics")
local PlayerNum = 0

-- local function IsHostPlayer(PlayerState)
--     if not PlayerState:IsValid() then return false end
--     local World = PlayerState:GetWorld()
--     if not World:IsValid() then return false end
    
--     -- 使用 GetPlayerController(World, 0) 获取本地 PC
--     local LocalPC = GPS:GetPlayerController(World, 0)
    
--     if not LocalPC:IsValid() then return false end
    
--     -- 判定 PlayerState 的 Owner 是否为本地 PC
--     return PlayerState.Owner == LocalPC
-- end

function Hook_K2_OnRestartPlayer(object, func, param)
    local player = param:get() -- AController
    if not player:IsValid() then return end
    
    local playerPawn = player:K2_GetPawn()
    if playerPawn:IsValid() then
        print("K2_OnRestartPlayer::before " .. playerPawn:GetFName():ToString() .. "\n")
    end

    -- Change Player Name
    local PS = player.PlayerState
    if PS:IsValid() then
        if PlayerNum == 0 then
            PS.PlayerName = "OG:BG_Server"
            print("Server Player Name set: OG:BG\n")
            PlayerNum = PlayerNum + 1
        else
            local NewName = string.format("Player-%03d", PlayerNum)
            PS.PlayerName = NewName
            print(string.format("Player Name set: %s", NewName) .. "\n")
            PlayerNum = PlayerNum + 1
        end
    end
    
    if (GameStarted) then
        if (GlobalTransportAirplane ~= nil and GlobalTransportAirplane:IsValid()) then
            print("Trying to spawn player on aircraft...\n")
            local seats = GlobalTransportAirplane.VehicleSeatComponent:GetSeats()
            for index, seatparam in pairs(seats) do
                local seat = seatparam:get()
                if (seat:IsValid() and (seat.Rider:IsValid() == false)) then
                    print("Found a valid seat #" .. index .. ", trying to spawn player on aircraft...\n")
                    GlobalTransportAirplane.VehicleSeatComponent:Ride(playerPawn, seat)
                    seat.Rider = playerPawn
                    return
                end
            end
        else
            if playerPawn:IsValid() then
                playerPawn:K2_TeleportTo(
                    {X = 796360.19, Y = 19990.86, Z = 528.53},
                    {Pitch = 0.0, Yaw = 0.0, Roll = 0.0}
                )
            end
        end
    else
        -- 非游戏开始阶段，如果开启 Debug 则传送
        if (Debug) then
            if playerPawn:IsValid() then
                playerPawn:K2_TeleportTo(
                    {X = 796360.19, Y = 19990.86, Z = 528.53},
                    {Pitch = 0.0, Yaw = 0.0, Roll = 0.0}
                )
            end
        end
    end
end

function Hook_GameStarted()
    -- GameStarted, we are going to find the Task_GasWarning and Task_GasRelease to fix the bluezone
    local taskGasWarningList = FindAllOf("Task_GasWarning_C")
    if not taskGasWarningList then
        print("Task_GasWarning_C not found\n")
        return
    else
        ---@param taskGasWarning UTask_GasWarning_C
        for _, taskGasWarning in ipairs(taskGasWarningList) do
            if (taskGasWarning.ActorOwner:IsValid()) then
                print(
                    "Task_GasWarning_C found, name = " ..
                        taskGasWarning:GetFullName() .. ", ActorOwner = " .. taskGasWarning.ActorOwner:GetFullName() .. "\n"
                )
                TaskGasWarning = taskGasWarning
            end
        end
    end

    local taskGasReleaseList = FindAllOf("Task_GasRelease_C")
    if not taskGasReleaseList then
        print("Task_GasRelease_C not found" .. "\n")
        return
    else
        ---@param taskGasRelease UTask_GasRelease_C
        for _, taskGasRelease in ipairs(taskGasReleaseList) do
            if (taskGasRelease.ActorOwner:IsValid()) then
                print(
                    "Task_GasRelease_C found, name = " ..
                        taskGasRelease:GetFullName() .. ", ActorOwner = " .. taskGasRelease.ActorOwner:GetFullName() .. "\n"
                )
                TaskGasRelease = taskGasRelease
            end
        end
    end
end

function Hook_K2_OnSetMatchState(object, func, param)
    local state = param:get():ToString()
    print("K2_OnSetMatchState::before, state=" .. state .. "\n")

    if state == "InProgress" then
        print("Game is in progress, we can start our stuff\n")
        GameStarted = true
        Hook_GameStarted()
    -- TeleportPlayersToStartPoint()
    end

    if state == "WaitingPostMatch" then
        print("Game Ended.Do Restarting...\n")
        GameEnded = true
        if (GameMode ~= nil) then
        -- GameMode:RestartGame()
        end
    end
end


Init()

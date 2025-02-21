# PUBG2017PS
A PUBG 2017 Open Source Private Server.

HOW TO USE
  1. Download the game: https://www.mediafire.com/file/1r1xxey0g9uwfka/PUBG_11_OCTOBER_2017.rar/file
  2. Put the "RUN_ListenServer.bat" and "RUN_LocalClientJoin.bat" files in /TslGame/Binaries/Win64
  3. Open the PUBG_InGame.sln file in VS 2022
  4. Select "Release" and then Build->Build Solution (Or Ctrl+Shift+B)
  5. Put the "settings.ini" file next to the DLL (/x64/Release in the solution folder)
  6. Replace original "TslGame" in /TslGame/Binaries/Win64 with the patched one: https://drive.google.com/file/d/1HmC9Jd2Ly4RiuuIrcRe_8b87bcoNgUdf/view?usp=sharing
  7. Run the "RUN_ListenServer.bat" batch file
  8. Enjoy!

*To join as a client and play the game, run the "RUN_LocalClientJoin.bat" batch file
*If you want to actually see what's going on in the server by launching it in non-headless mode, remove "-nullrhi -nosound" from the "RUN_ListenServer.bat" file. 

Telegram channel: https://t.me/ogbattlegrounds

Join the Discord for support: https://discord.gg/XDG82cg6kX

# PUBG2017PS
A PUBG 2017 Open Source Private Server.

# LICENSE NOTICE 
This project is licensed under the GNU General Public License v3.0 (GPLv3).

If you redistribute this project or a modified version, you must comply with the terms of the GPLv3, including:

Making the corresponding source code available.
Preserving all existing copyright and license notices.
Licensing your redistributed or modified version under GPLv3.

For the full terms and conditions, see the LICENSE file included in this repository.

# HOW TO USE
  1. Download the game: https://www.mediafire.com/file/lz1u4ce3afq50ai/PUBG_11_OCTOBER_2017.rar/file
  2. Put all the files from this repository in /TslGame/Binaries/Win64/
  3. Run the batch file "RUN_LocalServer.bat" to start your server
  4. Enjoy!

# LINUX GUIDE
To run the server on Linux: 
  1. Install wine
  2. Add `* soft nofile 65536` and `* hard nofile 65536` to /etc/security/limits.conf
  3. Run the "RUN_LocalServer.bat" with wine and enjoy :)

*To join as a client and play the game, run the "RUN_LocalClientJoin.bat" batch file
*If you want to actually see what's going on in the server by launching it in non-headless mode, remove "-nullrhi -nosound" from the "RUN_ListenServer.bat" file. 

If you enjoy my work and dedication, I'd appreciate a tip!: https://xmrchat.com/h4tiux

Telegram channel: https://t.me/ogbattlegrounds

Join the Discord for support: https://discord.gg/VQCTHh6wMB

-H4TIUX

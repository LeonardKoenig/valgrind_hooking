#!/bin/bash

if [ -z $@ ]; then
	COMMAND="/mnt/sdata/SteamLibrary/steamapps/common/PAYDAY 2/payday2_release"
	#source ./setenvs.bash
else
	COMMAND=$@
fi

export LD_PRELOAD="$PWD/hook.so $LD_PRELOAD"

unset SDL_AUDIODRIVER


printf "running command \"%s\"\n" "$COMMAND"
valgrind -q --tool=none "$COMMAND" 2>&1 | tee /tmp/pd2.log

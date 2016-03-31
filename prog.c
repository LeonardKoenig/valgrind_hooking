#include <stdio.h>
#include "names.h"

void ORIG_GAME_UPDATE(void)
{
	printf("it's me, the original" ORIG_GAME_UPDATE_STR "\n");
}

int main()
{
	ORIG_GAME_UPDATE();

	return 0;
}

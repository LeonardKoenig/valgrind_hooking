#include <stdio.h>
#include <valgrind.h>
#include "names.h"


void I_WRAP_SONAME_FNNAME_ZU(NONE, ORIG_GAME_UPDATE) (void)
{
	OrigFn fn;
	VALGRIND_GET_ORIG_FN(fn);

	printf("WRAPPER: " ORIG_GAME_UPDATE_STR"(void);\n");

	CALL_FN_v_v(fn);
	printf("WRAPPER: return;\n");

	return;
}

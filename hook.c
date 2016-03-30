#include <stdio.h>
#include <valgrind.h>

long I_WRAP_SONAME_FNNAME_ZU(NONE,foo) (long x, long y)
{

	OrigFn fn;
	VALGRIND_GET_ORIG_FN(fn);

	printf("WRAPPER: foo(%ld, %ld);\n", x, y);

	long result;
	CALL_FN_W_WW(result, fn, x,y);
	printf("WRAPPER: return %ld;\n", result);

	return result;
}

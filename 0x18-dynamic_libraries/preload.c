#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>

// Define the original function signature
typedef int (*OriginalFunctionType)(int, int, int, int, int, int);

// Define your replacement function
int modified_function(int a, int b, int c, int d, int e, int f)
{
	printf("Custom behavior: a = %d, b = %d, c = %d, d = %d, e = %d, f = %d\n", a, b, c, d, e, f);


    OriginalFunctionType original_function = (OriginalFunctionType)dlsym(RTLD_NEXT, "gm");
    return original_function(a, b, c, d, e, f);
}


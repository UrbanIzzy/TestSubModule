#include <stdio.h>
#include "util_math.h"

int main()
{

	int a=5;
	int b=2;
	int c;

	c = Util_Add(a, b);
	printf("%d + %d = %d\n", a, b, c);
	c = Util_Sub(a, b);
	printf("%d - %d = %d\n", a, b, c);
	return 0;
}


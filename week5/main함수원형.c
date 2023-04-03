#include <stdio.h>

int main(int argc, char* argb[])
{
	printf("argc = %d\n", argc);
	for (int ndx = 0; ndx != argc; ++ndx)
		printf("argv[%d] --> %s\n", ndx, argb[ndx]);
	printf("argv[argv] = %p\n", (void*)argb[argc]);
}
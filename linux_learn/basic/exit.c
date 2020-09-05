#include "/home/lotus/hedar.h"

void test()
{
	printf("test first line\n");
	printf("test second line\n");
}

void main()
{
	printf("prog start\n");
	atexit(test);	// init test() function 
	sleep(5);
	exit(0);	// at exit test() call
	printf("prog end"); // not going to exicute
}


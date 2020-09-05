#include "/home/lotus/hedar.h"

void main()
{
	printf("prog start\n");
	execl("/bin/ls","ls","-l",NULL);
	printf("prog end\n");
}

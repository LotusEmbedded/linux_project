#include "/home/lotus/hedar.h"

void main(int num,char **str)
{
	printf("program start\n");
	if (num != 3)
	{
		printf("USAGE : ./my_kill sig_no pid\n");
		return;
	}
	kill(atoi(str[2]),atoi(str[1]));
	perror("Kill");
	printf("Prog end\n");

}


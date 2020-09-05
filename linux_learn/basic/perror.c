#include "/home/lotus/hedar.h"

void main()
{
	printf("prg start\n");
	FILE *fp = fopen("data.txt","r");
	if (fp == 0)
	{
		perror("fopen");
		printf("file not there\n");
		return;
	}
	else
	{
		printf("file is found\n");
	}
	printf("prog endn\n");
}


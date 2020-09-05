#include "/home/lotus/hedar.h"

void my_alarm(int n)
{
	printf("In Alarm\n");
	alarm(2);	// 2 second timer set
}

void main()
{
	int tim=0;
	printf("prog start\n");
	signal(SIGALRM,my_alarm); // alarm set 
	tim = alarm(10);	// 10 second timer set then call my_alarm

	while(1) 
	{
//		printf("alarm time %d\n",tim);
	}
	printf("prog end\n");
}

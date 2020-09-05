#include "/home/lotus/hedar.h"

void main()
{
	printf("prog start\n");
	if(fork() == 0)
	{	// child 1
		int r;
		srand(getpid());
		printf("In child 1\n");
		r = rand()%20 +1;
		printf("ch1 sleep for %d\n",r);
		sleep(r);
		printf("exit child 1\n");
	}
	else
	{	// parent
		if(fork() == 0)
		{	// child 2
			int r;
			srand(getpid());
			printf("In child 2\n");
			r = rand()%20 +1;
			printf("ch2 sleep for %d\n",r);
			sleep(r);
			printf("exit child 2\n");
		}
		else
		{	// parent
			if(fork() == 0)
			{	// child 3
				int r;
				srand(getpid());
				printf("In child 3\n");
				r = rand()%20 +1;
				printf("ch3 sleep for %d\n",r);
				sleep(r);
				printf("exit child 3\n");
			}
			else
			{
				printf("In parant\n");
				while(wait(0) != -1);
				printf("Exit parant\n");
			}
		}
	}
//	printf("comman end\n");
}


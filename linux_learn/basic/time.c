#include "/home/lotus/hedar.h"

void main()
{
	time_t t1;
	while(9)
	{
	
		t1 = time(0);	// geting real time
	//	time(&t1);  // both are same
		printf("TIME : %s\n",ctime(&t1));
		sleep(1);
		system("clear");
	}

}

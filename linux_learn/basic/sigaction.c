#include "/home/lotus/hedar.h"

void my_isr()
{
	printf("In isr\n");
}

void main()
{
	struct sigaction v;
	printf("prog start pid = %d\n",getpid());
	
	v.sa_handler = my_isr; // my_isr or SIG_DFL or SIG_IGN
	sigemptyset(&v.sa_mask);
	v.sa_flags = 0;

	sigaction(SIGINT,&v,NULL);
	printf("prog end\n");
	while(9);

}



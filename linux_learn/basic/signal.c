#include "/home/lotus/hedar.h"

void my_isr(int n)
{
	printf("In ISR, Signal no %d\n",n);
}
void main()
{
	printf("prog start\n");
	signal(2,my_isr);	// when signal 2 come my_isr calll
	pause();		// hold program 
	printf("Prog end\n");
}

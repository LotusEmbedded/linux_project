#include "/home/lotus/hedar.h"

void main()
{
	int p[2];
	pipe(p);
	
	if (p == 0)
	{
		perror("pipe"); return;
	}

	if (fork())
	{ // parent
		char s[20];
		printf("In parent enter data = ");
		scanf("%s",s);
		write(p[1],s,strlen(s)+1);
		sleep(1);	// wait for child recive data and process
	}
	else
	{ // child
		char s1[20];
		printf("In child recive data = ");
		read(p[0],s1,sizeof(s1));
		printf("%s\n",s1);
	}

}

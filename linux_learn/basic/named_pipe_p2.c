#include "/home/lotus/hedar.h"

void main()
{
	char s[20];
	int fd;

	mkfifo("f1",0644);
	perror("mkfifo");

	printf("Before...\n");
	fd = open("f1",O_RDONLY);
	printf("After...\n");

	while(1)
	{
		read(fd,s,sizeof(s));
		printf("Data : %s\n",s);
	}
}

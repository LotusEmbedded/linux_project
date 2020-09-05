#include "/home/lotus/hedar.h"

void main()
{
	char s[20];
	int fd;

	mkfifo("f1",0644);
	perror("mkfifo");

	printf("Before...\n");
	fd = open("f1",O_WRONLY);
	printf("After...\n");

	while(1)
	{
		printf("enter data = ");
		scanf("%s",s);
		write(fd,s,strlen(s)+1);
	}
}

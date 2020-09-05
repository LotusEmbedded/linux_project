#include "/home/lotus/hedar.h"

void main()
{
//	close(1); // close stdout 
	int fd;
	char str[10];
	char str1[30]="this is writen by utpal\n";
	fd = open("test.txt",O_RDWR | O_APPEND);

	if (fd < 0)
	{
		perror ("open");
		return;
	}

	printf("File open fd = %d\n", fd);
	
	read(fd,str,10);
	printf("In file data is = %s\n",str);

	write(fd,str1,30);

	close(fd);

}

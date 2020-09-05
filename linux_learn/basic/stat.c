/*
 * Find out the file size without opening file
 * 
 */

#include "/home/lotus/hedar.h"

void main(int num,char **str)
{
	struct stat v;
	
	if(num != 2)
	{
		printf("USAGE: ./a.out file_name\n");
		return;
	}

	if(stat(str[1],&v) < 0)
	{
		perror("stat");
		return;
	}

	printf("size = %ld\n",v.st_size);
	printf("inode = %ld\n",v.st_ino);
}

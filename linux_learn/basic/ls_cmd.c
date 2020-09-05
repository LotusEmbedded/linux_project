/*
 * own ls command
 */

#include "/home/lotus/hedar.h"

void main(int argc, char **argv)
{
	struct dirent *p;
	DIR *dp;

	if (argc !=2)
	{
		printf("USAGE: ./a.out path\n");
		return;
	}
	dp = opendir(argv[1]);
	if (dp == 0)
	{
		perror("opendir");
		return;
	}

	while(p = readdir(dp))
	{
		if(p -> d_name[0] != '.')
			printf("%s\n",p->d_name);
	}

}

#include "/home/lotus/hedar.h"

void main()
{
	int fd;
	fd = open("data.txt",O_WRONLY | O_CREAT | O_TRUNC,0644);
	// Creat a file and open with read write and trunketed data with 644 file permition
	
	if (fd == 0)
	{
		perror("open");
		return;
	}
	printf("File is open fd = %d \n",fd);

}

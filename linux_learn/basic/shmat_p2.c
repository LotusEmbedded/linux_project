#include "/home/lotus/hedar.h"

void main()
{
	char *p;
	int id;

	id= shmget(5,50,IPC_CREAT|0644);	// shard memory creat and get id
	perror("shmget");

	printf("id = %d\n",id);

	p = shmat(id,0,0);	// Shard memry atteched

	printf("Recive data from shard memory :%s\n ",p);
	
}

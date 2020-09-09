#include "/home/lotus/hedar.h"

struct msgbuf
{
	long mtype;
	char data[10];
};

void main(int argc, char **argv)
{
	int id;
	struct msgbuf v;

	if(argc != 2)
	{
		printf("USAGE: ./a.out type\n");
		return;
	}

	id = msgget(5,IPC_CREAT | 0644); // message Q define

	if(id < 0)
	{
		perror("msgget");
		return;
	}

	printf("id = %d\n",id);
	printf("Before...\n");

	msgrcv(id,&v,sizeof(v),atoi(argv[1]),0);
	perror("magrcv");
	printf("Recive data: %s\n",v.data);

}

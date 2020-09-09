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

	if(argc != 3)
	{
		printf("USAGE: ./a.out type msg\n");
		return;
	}

	id = msgget(5,IPC_CREAT | 0644); // message Q define

	if(id > 0)
	{
		perror("msgget");
		return;
	}

	printf("id = %d\n",id);
	v.mtype = atoi(argv[1]);

	strcpy(v.data,argv[2]);
//	strcpy(v.data,"Hello_utpal");
	msgsnd(id,&v,strlen(v.data)+1,0);
	perror("magsnd");

}

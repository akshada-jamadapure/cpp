#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/ipc.h>
void main()
{
	int i,j,k;
	char s[20];
	int p[2],p2[2];
	pipe(p);
	perror("pipe");
        pipe(p2);
        perror("pipe");

	if(fork()==0)
	{
		printf("Enter string\n");
		scanf("%s",s);
		write(p[1],s,strlen(s)+1);
		printf("%s",s);
		read(p2[0],s,sizeof(s));
		printf("%s",s);

	}

	else
	{
		char s[20];
		read(p[0],s,sizeof(s));
		//for(i=0;s[i];i++)
		
			printf("%s",s);
		
		write(p2[1],s,strlen(s)+1);
	}
}



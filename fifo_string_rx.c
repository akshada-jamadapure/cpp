#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/ipc.h>

void string(char *p)
{
	int i,j;
	for(i=0;p[i];i++);
	for(j=0;p[j];j++)
	{
		char t=p[j];
		p[j]=p[i];
		p[i]=t;
	}
}

void main()
{
	char s[20];
	int f1=open("f1",O_RDONLY);
	read(f1,s,sizeof(s));
	printf("%s",s);
	string(s);

	int f2=open("f2",O_WRONLY);
	write(f2,s,strlen(s)+1);
}



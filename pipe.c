#include<stdio.h>
#include<unistd.h>
#include<string.h>
void main()
{
	int p[2];

	pipe(p);
	perror("pipe");

	if(fork()==0)
	{
		char b[20],i;
		close(p[1]);
		while(1)
		{
			read(p[0],b,sizeof(b));
			for(i=0;b[i];i++)
			{
				if(b[i]>='a' && b[i]<='z')
					b[i]=b[i]-32;
			}
			printf("data=%s\n",b);
		}
	}
	else
	{
		char a[15],ch;
		close(p[0]);
		while(1)
		{
			printf("Enter data\n");
			scanf("%s",a);
			write(p[1],a,strlen(a)+1);
		}
	}
}




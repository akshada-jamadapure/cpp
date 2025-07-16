#include<stdio.h>
#include<stdlib.h>
int main()
{
char *p="-78P.5A88";
float f,d;
d=atof(p);
printf("%.3f\n",d);
}




/* int main()
{
printf("first\n");
fork();
printf("second\n");
fork();
printf("third\n");
exit(0);
}


/*
int main()
{
char num,n=11;
num=n<<4;
printf("%d\n",num);
}
*/









/*#include<stdio.h>
void my_getpid(void);

int main()
{
	my_getpid();
	printf("perrror\n");
}
void my_getpid(void)
{
	static int fg=4;
	if(--fg)
	{
		my_getpid();
		printf("%d ",fg);
	}
}

*/





/*
int main()
{
char num_char[16]="1A2B3C4D5E6F7G8";
int *_linux;
_linux=(char *)num_char;
printf("%c\n",_linux[2]);
}
*/

/*int main()
{
char num_char[16]="1A2B3C4D5E6F7G8";
int *_linux;
_linux=(char *)num_char;
printf("%c\n",_linux[2]);
}
*/


/*
int main()
{
int arr[2][3][2]={{{2,4},{7,8},{3,4}},{{2,2},{2,3},{3,4}}};
printf("%d\n",**(*arr+2)+0+2);
}
*/




/*void main()
{
char *c[]={"India","Aus","Eng","Worldcup"};
char **cp[]={c+3,c+2,c+1,c};
char ***cpp=cp;
cpp++;
printf("%s\n",*--*++cpp);
}
*/


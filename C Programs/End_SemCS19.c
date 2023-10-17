#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[]="NIT Patna";
	char *s=str+7;while(s>=str){
		printf("%s\n",s);s--;
	}
	int *b=(int *)malloc(6*sizeof(int));
	printf("********\n%d %d %d\n*********",sizeof(b),sizeof(b[0]),sizeof(b)/sizeof(b[0]));
	char st[20]="NITP";
	char *p=str;
	*p='M';
	printf("\n%s",str);
	struct{short s[5];
	union{float y;
	long z;
	}u;
	}t;
	printf("\n********\n%d",sizeof(t));
	unsigned char i=0;
	for(;i<=0;i++)
	printf("\n********\n%d\n",i);
	struct node{
		int i;float j;
	};
	struct node *sh[10];
	printf("\n********\n%d",sizeof(sh));
	int a[][4]={5,7,5,9,4,6,3,1,2,9,0,6};
	int *ptr,(*q)[3];
	ptr=(int*)a;
	q=a;
	printf("\n********\n%u %u %d %d\n",p,q,*p,*(*(q+0)));
	printf("%u %u %d %d\n",p,q,*p,**q);
	p++;q++;
	printf("%u %u %d %d\n",p,q,*p,*(*(q+0)));
	char *str2="NIT Patna";
	char c[5]={'a','b','c','d'};
	printf("******\n%s",s+(c[3]-c[1]));
	int n=10,x;
	printf("\n********\n");
	x=(n>20)?n+10:printf("NITP");
	printf("%d\n",x);
	x=(n>20)?n+10:printf("NITP\t\n");
	printf(" %d\n",x);
	int n1=sizeof(str)/sizeof(str[0]);
	int n2=strlen(str)/sizeof(s[0]);
	printf("*******\n%d %d\n",n1,n2);
	return 0;
}

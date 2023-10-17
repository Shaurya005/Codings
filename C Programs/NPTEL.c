#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct p{
	int x;
	char y;
};

int main(){
	int *pp,*p2;
	pp=(int *)malloc(sizeof(int));
	p2=(int *)calloc(5,sizeof(int));
	//p=&10;// Compiler Error
	
	struct p p1[]={1,51,69,52,64};
	printf("%d %c %d %c %d\n",p1[0].x,p1[0].y,p1[1].x,p1[1].y,p1[2].x,p1[2].y);
	struct p *ptr1=p1;
	printf("%d\n",sizeof(p1));
	int x=(sizeof(p1)/4);
	printf("%d\n",x);
	if (x==sizeof(int)+2*sizeof(char))
	printf("True");
	else
	printf("False");
	
	x=1;
	int r=(x&=4);
	printf("%d",x);
	
	int arr[4]={1,2,3,4};
	arr[0]=arr[1]++;
	++arr[2];
	printf("%d %d %d %d\n", arr[0],arr[1],arr[2],arr[3]);
	
	char str1[]="Week-7-Assignment"; // sizeof(str1) will give 18 but strlen(str1) will give 17 as answer.
	char str2[]={'W','e','e','k','-','7','-','A','s','s','i','g','n','m','e','n','t'}; 
	// sizeof(str2) will give 17 but strlen(str2) will give 19 as answer.
	printf("%d %d %d %d",strlen(str1),strlen(str2),sizeof(str1),sizeof(str2));
	
	int i;
	if(i=0,2,3)
	 printf("\nNPTEL ");
	else
	 printf("Programming In C");
    printf("%d\n",i);  
    int n=printf("IIT BHU");
    printf("%d\n",n);
    
    for(i=0;i<5;i++){
    	int i=10;
    	printf("%d ",i);
    	i++;
	}
	return 0;
}

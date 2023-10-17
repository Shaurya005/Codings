#include<stdio.h>
int main()
{
	int num;
	printf("Enter number of elements \n");
	scanf("%d",&num);
	int i[num];int temp;
	for(int j=0;j<num;j++)
	scanf("%d",&i[j]);
	for(int m=0;m<num;m++)
	{
		for(int n=m+1;n<num;n++)
			if(i[n]<i[m]){
				temp=i[m];
				i[m]=i[n];
                i[n]=temp;
			}
    }
	for(int j=0;j<num;j++)
	printf("%d ",i[j]);
}

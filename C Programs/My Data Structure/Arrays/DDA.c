#include<stdio.h>
int main()
{
	int o=78;
	printf("%u",o);
	int i,stu[4][2];
	for(i=0;i<=1;i++)
	scanf("%d %d %d %d",&stu[0][i],&stu[1][i],&stu[2][i],&stu[3][i]);
    // Here inspite of inputting elements column wise, address are stored row wise by default
	for(i=0;i<=1;i++)
	printf("%d %d %d %d\n",stu[0][i],&stu[1][i],&stu[2][i],&stu[3][i]);
	
	int stud[4][2]={1234,56,1212,33,1434,80,1312,78};//Here it is stored row wise by default
	i=0;
	for(;i<=1;)
	{
	printf("%d %d %d %d\n",stud[0][i],stud[1][i],stud[2][i],stud[3][i]);i++;
	}printf("%d",stu[2]);
}

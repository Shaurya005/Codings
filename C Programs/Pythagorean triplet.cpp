#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=30;i++)
	for(j=i+1;j<=30;j++)
	for(k=j+1;k<=30;k++){
	if((i*i+j*j)==k*k){
	printf("%d %d %d\n",i,j,k);
	break;}
	else if((i*i+j*j)<k*k)
	break;}
}

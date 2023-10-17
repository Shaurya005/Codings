#include<stdio.h>
#include<string.h>

char S[40];char *data[40];static int i=0;int N;
void solve(){
    if(i==0){
    	data[0]=(char *)malloc(51200*sizeof(char));
    	printf("NO");
    	strcpy(data[0],S);
    	i++;
    }
	else{
		int k=0,flag=0;
		while(k < i){
			if(strcmp(data[k],S)==0){
			 printf("YES");
			flag=1;break;
			}
			k++;
			}
			if(flag==0){
				printf("NO");
				data[i]=(char *)malloc(51200*sizeof(char));
				strcpy(data[i++],S);
			}
		}
	}
int main(){
	int N;scanf("%d",&N);
	while(N--){
		scanf("%s",S);
		solve();
	   printf("\n");
	}
	return 0;
}

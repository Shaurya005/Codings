#include<stdio.h>
#include<string.h>
void count_(char *s){
	int i,j,count=0,k,l=strlen(s);
		for(i=0;i<l;i++){
			k=0;
			for(j=0;j<i;j++)
				if(s[i]==s[j]) {
					k = 1;
					break;
				}
			if(k==0)
			{
				for(j=i;j<l;j++)
					if(s[j]==s[i])
						count++;
			    printf("%c%d",s[i],count);
				count=0;  
			}
}
}
int main(){
	char *s="submissions";
	count_(s);
	printf("\n");
}

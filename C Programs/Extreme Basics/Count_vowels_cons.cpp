#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50],vowel=0,cons=0,space=0,i;
	printf("Enter a line of text\n");
	//gets(ch);
	scanf("%[^\n]s",ch);
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]!=' ')
		{
		if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'
		||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
		vowel++;
		else
		cons++;
	    }
	    else
	    {
	    	space++;
		}
	}
	printf("No. of vowels is %d\n",vowel);
    printf("No. of consonants is %d\n",cons);	
    printf("No. of spaces is %d\n",space);
    printf("No. of words is %d\n",space+1);
}

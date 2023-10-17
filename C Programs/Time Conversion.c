 #include<string.h>
 #include<stdio.h>
 int main(){
 	char s[]="11:34:43PM";//If it were char *s then it shows [Warning] deprecated conversion from string constant to 'char*' [-Wwrite-strings]
	/*int sum,a,b;
    if(s[8]=='P')
    {
       sum=((s[0]-48)*10+(s[1]-48))+12;
       printf("%d\n",sum);
       a=sum/10;b=sum%10;
       printf("%c %d\n",a+'0',b+'0');//It get automatically converted into char or ascii integer depending on format specifier.
	                                 //  if there is arithmatic operation between integer and char.
/*     s[0]=a+'0';
	   s[1]=b+'0';
       s[8]='\0';
       s[9]='\0';[Error] */
     char st[2],t[5];int i,sum,a,b;
     //strcpy(t,"");
   if(s[8]=='P')
   {
       sum=((s[0]-48)*10+(s[1]-48))+12;
       a=sum/10;b=sum%10;
       t[0]=a+'0';
       t[1]=b+'0';
       for(i=2;i<8;i++)
       t[i]=s[i];
   }
   else{
   for(i=0;i<8;i++)
   t[i]=s[i];}
   printf("%s\n",t);
}

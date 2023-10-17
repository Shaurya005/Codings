#include<stdio.h>
#include<conio.h>
void convert_to_roman(int);
int main()
{
 int year;
 printf(" Enter a year : ");
 scanf("%d",&year);
 printf(" In roman numerals : ");
 convert_to_roman(year);
 getch();
}
void convert_to_roman(int y)
{
 int m, o, te, th, h, i;
 th=y/1000;
 th*=1000;
 y=y%1000;

 h=y/100;
 h*=100;
 y=y%100;

 te=y/10;
 te*=10;
 o=y%10;

 for(i=1;i<=th/1000;i++)
 printf("m");

 if(h==500)
 printf("d");
 else if(h>500)
 {
  printf("d");
  m=h-500;
  for(i=1;i<=m/100;i++)
  printf("c");
 }
 else if((h<500)&&(h!=0))
 {
  m=h-100;
  printf("c");
  for(i=1;i<=m/100;i++)
  printf("c");
 }

 if(te==50)
 printf("l");
 else if(te>50)
 {
  printf("l");
  m=te-50;
  for(i=1;i<=m/10;i++)
  printf("x");
 }
 else if((te<50)&&(te!=0))
 {
  printf("x");
  m=te-10;
  for(i=1;i<=m/10;i++)
  printf("x");
 }

 if(o==5)
 printf("v");
 else if(o>5)
 {
  if(o==9)
  printf("ix");
  else
  {
   m=o-5;
   printf("v");
   for(i=1;i<=m;i++)
   printf("i");
  }
 }
 else if((o<5)&&(o!=0))
 {
  if(o==4)
  printf("iv");
  else
  {
  m=o-1;
  printf("i");
  for(i=1;i<=m;i++)
  printf("i");
 }
}}

#include<stdio.h>
int* gradingStudents(int grades_count, int* grades, int* result_count) {
int i,n;
int a[grades_count];//If here static is written then it shows [Error]storage size of 'a' isn't constant
*result_count=grades_count;
for(i=0;i<grades_count;i++)
if(grades[i]>37)
    if(grades[i]%5>2){
    n=grades[i]/5;
    grades[i]=n*5+5;}
for(i=0;i<grades_count;i++)
printf("%d ",grades[i]);
return grades;
}
int main(){
	int i,grades[5]={34,54,63,72,89};
	int result_count;
	int *a=gradingStudents(5, grades,&result_count);
	for(i=0;i<5;i++)
printf("%d ",a[i]);
}

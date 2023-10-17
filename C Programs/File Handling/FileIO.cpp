#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *f,*fp,*fc;char ch;
//f,fp,fc are pointers to data type FILE
//Function Delaration: FILE *fopen(const char *filename,const char *mode);It creates a new file if mentioned file doesn't exists.
	f=fopen("Hello.txt","r");
	fc=fopen("HelloHiiiiii.c","w");
	fc=fopen("NewHii.c","r");
	fp=fopen("HelloHii.cpp","w");
	fp=fopen("Hellohello.pptx","w");
	fp=fopen("HelloHii.xlsx","w");
	fp=fopen("HelloHii.docx","w");
	if(f==NULL)
	{
		puts("File is unable to open\n");
		exit(1);
	}
	if(fp==NULL)
	{
		puts("File is unable to create\n");
		exit(1);
	}
	int i=0;
	while(1)
	{
	ch=fgetc(f);//Reads character by character
	if(ch==EOF)
	break;
	i++;
	fputc(ch,fp);//Here old contents are overwritten i.e. erased and written new ones.
	putch(ch);
	}
	fclose(f);
	//Function Delaration: int fclose(FILE *fp)
	printf("Total no. of characters is %d",i);//It counts one character for new line and one more for \0 at last
}
/*
fgets() - To read a file line by line 
Declaration: char *fgets(char *string,int n,FILE* fp)
             fgets(buffer,size,fp)//buffer is to put the data in and size is for size of buffer
fputs() - 
The file I/O functions fprintf() and fscanf() work just like printf() and scanf(), 
except that they require an additional first argument to identify the proper file.
fscanf() - 
fprintf() - To write string into a file
Declaration: int fprintf(FILE *fp,const char *format)
             fprintf(fp,"some data") or fprintf(fp,"text %d",variable_name)

File opening modes in C:

“r” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. 
 If the file doesn’t exist, a new file is created. If the file cannot be opened fopen( ) returns NULL.

“w” – Searches file. If the file exists, its contents are overwritten.
 If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.

“a” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it.
 If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.

“r+” – Searches file. If is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it.
 Returns NULL, if unable to open the file.

“w+” – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created.
 Returns NULL, if unable to open file.

“a+” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the last character in it. 
 If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.

As given above, if you want to perform operations on a binary file, then you have to append ‘b’ at the last.
 For example, instead of “w”, you have to use “wb”, instead of “a+” you have to use “a+b”. 

For performing the operations on the file, a special pointer called File pointer is used which is declared as
FILE *filePointer; 
So, the file can be opened as 
filePointer = fopen(“fileName.txt”, “w”)
The second parameter can be changed to contain all the attributes listed in the above table.

Reading from a file –
The file read operations can be performed using functions fscanf or fgets. 
Both the functions performed the same operations as scanf and gets but with an additional parameter, the file pointer. 
So, it depends on you if you want to read the file line by line or character by character.
And the code snippet for reading a file is as:
FILE * filePointer; 
filePointer = fopen(“fileName.txt”, “r”);
fscanf(filePointer, "%s %s %s %d", str1, str2, str3, &year);

Writing a file –:
The file write operations can be perfomed by the functions fprintf and fputs with similarities to read operations. The snippet for writing to a file is as :
FILE *filePointer ; 
filePointer = fopen(“fileName.txt”, “w”);
fprintf(filePointer, "%s %s %s %d", "We", "are", "in", 2012);
*/

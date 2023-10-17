#include<stdio.h>
#define pr printf
#define s scanf
int main()
{
	int i,j,p,q,n,nos,box,total,k,count=0;
	//pr("Enter the size of square matrix\n");
	//s("%d",&n);
	n=4;
	int a[4][4]={1,2,3,4,5,0,0,6,7,0,0,8,9,4,5,2};
	pr("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		total=4*(n-1-2*i);
	for(j=0;j<n;j++)
	pr("%d ",a[i][j]);
	pr("\n");}
	//pr("Enter the elements of array\n");
	//for(i=0;i<n;i++)
	//for(j=0;j<n;j++)
	//s("%d",&a[i][j]);
	pr("\n\nEnter the no. of shift to made\n");
	s("%d",&k);
	int arr[k];
	nos=n/2;//nos is no. of squares
	pr("\n No. of squares is %d\n",nos);
		for(i=0;i<nos;i++)
		{
		for(p=0+i;p<n-i;p++)
		for(q=0+i;q<n-i;q++)
        if((p==i||p==n-i-1||q==n-i-1)||(q==i||p==n-i-1||q==n-i-1)||(p==i||p==n-i-1||q==i)||(q==i||q==n-i-1||p==n-i-1))
	    {
		    ++count;
		    if(count<=k)
		    arr[count-1]=a[p][q];
		    else
		    {
		    	box=a[p][q];
		    	a[p][q]=arr[count-k-1];
		    	arr[count-k-1]=box;
       //box=a[p][q];
	   //a[p][q]=arr[count-k];
	   //arr[count-k]=box;
			}
	    	/*if(count%k+2==0)
	    	{
	    		box=a[p][q];
	    		a[p][q]=box;
	    		old_box=box;
		    }*/
	    }
		count=0;
		}
	    pr("count is %d\n",count);
	pr("\n\nMatrix after shifting is\n\n");
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	pr("%d ",a[i][j]);
	pr("\n");}
}

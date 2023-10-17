#include<stdio.h>
int kthSmallest(int arr[], int l, int r, int k)
    {
     int temp;
     for(int i=0;i<=r;i++){
         for(int j=i+1;j<=r;j++){
             if(arr[i]>arr[j]){
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }
     return arr[k-1];
}
 
int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int number_of_elements;
        scanf("%d", &number_of_elements);
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            scanf("%d", &a[i]);
            
        int k;
        scanf("%d",&k);
        printf("%d",kthSmallest(a, 0, number_of_elements-1, k));
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[20],j,i,n;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    sort(arr,n);
    printf("Sorted elements is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
void sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=j)
        {
            if(arr[i] > arr[min])
            {
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min] =temp;
            }
        }
    }
}
 
#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter array elments\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elemets is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    sort(arr,n);
    printf("Sorted elements is \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

}
void sort(int arr[],int n)
{
    int i,r,temp;
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

}
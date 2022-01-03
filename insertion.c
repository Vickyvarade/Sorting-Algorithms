#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("sorted elemets is : \n");
    sort(arr,n);
    printf("Soretd elemenst is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void sort(int arr[],int n)
{
    int j,i,temp;
    for(i=1;i<n;i++)
    {   
        temp=arr[i];
        j=i-1;
        while((j>=0) && (arr[j]>=temp))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

}
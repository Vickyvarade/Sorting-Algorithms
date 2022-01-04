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

    quicksort(arr,0,n-1);
    printf("Sorted elements is \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

}
int part(int arr[],int l,int h)
{

	int	pivot=arr[l];
	int start=l;
	int end=h;
	while(start < end)
	{
		while(arr[start] <= pivot)
			start++;
		while(arr[end] > pivot)
			end--;
		if(start < end)
		{
			swap(&arr[start],&arr[end]);
		}
	}
	swap(&arr[l],&arr[end]);
	return end;
}
void quicksort(int arr[],int l,int h)
{
	if(l<h)
	{
		int pi=part(arr,l,h);
		quicksort(arr,l,pi-1);
		quicksort(arr,pi+1,h);
	}
}

void swap(int* a,int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
	


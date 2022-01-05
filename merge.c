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

    mergesort(arr,0,n-1);
    printf("Sorted elements is \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

}
void merge(int arr[],int l,int mid,int h)
{

	int	i=l;
	int j=mid+1;
	int k=0;
	int b[20];
	while(i <= mid && j <=h)
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	if(i>mid)
	{
		while(j<=h)
		{
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			i++;
			k++;
		}
	}
	for(k=l;k<=h;k++)
	{
		arr[k]=b[k];
	}
}	

void mergesort(int arr[],int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}



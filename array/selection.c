/*Selction sort
 * process
 * i=0;
 * min=i 
 * first we have find the smallest element INDEX in a loop 
 * after that
 * if i and min are same no swap.
 * if not same swap */



#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX], i,j,n, min,temp;
	printf("Enter the no of elements : ");
	scanf("%d",&n);

	printf("Enter the arrar elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nyou entered elements are : \n");
	for(i=0;i<n;i++)
        {
                printf("%d\t",arr[i]);
        }

	/*selection sort*/
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
				min=j;
		}
		if(i!=min)
		{
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	printf("\nThe sorted array is : \n");
	for(i=0;i<n;i++)
        {
                printf("%d\t",arr[i]);
        }
	return 0;
}


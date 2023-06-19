#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX], i,j,n,temp;
	printf("Enter the no of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("you entered elements are : \n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);

	/*buddle sort*/
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nThe sorted array is : \n");
	for(i=0;i<n;i++)
                printf("%d\t",arr[i]);
}

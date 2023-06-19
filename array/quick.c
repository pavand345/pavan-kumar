#include<stdio.h>
void quick_sort(int *,int ,int);
int partition(int *,int ,int);
void swap(int *,int ,int );
int main()
{
	int n,i;
	printf("Enter the No.of array element\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the Array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("Printing the Array element\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	quick_sort(arr,0,n-1);
	
	printf("After print the Array element\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void quick_sort(int *a,int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc = partition(a,lb,ub);
		quick_sort(a,lb,loc-1);
		quick_sort(a,loc+1,ub);

	}
}
int partition(int *a,int lb,int ub)
{
	int pivot = a[lb],start = lb,end = ub;
	while(start<=end)
	{
		while(pivot>=a[start])
			start++;
		while(pivot<a[end])
			end--;
		if(start<end)
			swap(a,start,end);
	}
	swap(a,lb,end);
	return end;
}
void swap(int *a,int lb,int end)
{
	int temp;
	temp = a[lb];
	a[lb] = a[end];
	a[end] = temp;
}

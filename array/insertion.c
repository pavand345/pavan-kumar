#include<stdio.h>
int insertion(int *,int);
int main()
{
        int n,i,j,temp;
        printf("enter the size of the array : ");
        scanf("%d",&n);
        int arr[n];
        printf("ente the array elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        printf("The array elements you entered\n");
        for(i=0;i<n;i++)
                printf("%d ",arr[i]);
	insertion(arr,n);
}
int insertion(int *a,int n)
{
       int i,j,index;
       for(i=1;i<n;++i)
       {
	       index=a[i];
	       for(j=i;j>0&&a[j-1]>index;j--)
		       a[j]=a[j-1];
	       a[j]=index;
       }
       printf("\nAfter the sorting elements are\n");
       for(i=0;i<n;i++)
	       printf("%d ",a[i]);
}

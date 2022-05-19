#include<stdio.h>
int selection_sort(int *arr,int n)
{
	int i,j,temp,max;
	for(i=n-1;i>=0;i--)
	{
	 max=0;
	 for(j=0;j<=i;j++)
	 {
	 	if(arr[j]>arr[max])
	 	{
	    	max=j;
		}
	 }	
    temp=arr[i];
    arr[i]=arr[max];
	arr[max]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
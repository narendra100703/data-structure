#include<stdio.h>
int *merge_sort(int *arr,int *brr,int a,int b)
{
	int i=0,j=0,k=0;
	static int crr[100];
	while(i<a && j<b)
	{
		if(arr[i]<brr[j])
		{
			crr[k]=arr[i];
			i++;
		}
		else if(brr[j]<arr[i])
		{
			crr[k]=brr[j];
			j++;
		}
		k++;
	}
	while(i<a)
	{
		crr[k++]=arr[i++];
	}
	while(j<b)
	{
		crr[k++]=brr[j++];
	}
	return crr;
}
int main()
{
	int a,b,i;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&b);
	int brr[b];
	for(i=0;i<b;i++)
	{
		scanf("%d",&brr[i]);
	}
	int *crr;
	crr=merge_sort(arr,brr,a,b);
	for(i=0;i<a+b;i++)
	{
		printf("%d ",crr[i]);
	}
}
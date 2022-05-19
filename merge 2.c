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
		else if(arr[i]>brr[j])
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
void main()
{
	int n,i,a,b;
	scanf("%d",&n);
	a=b=n/2;
	int ar[n],arr[a],brr[b];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		arr[i]=ar[i];
	}
	int j=0;
	for(i=(n/2);i<n;i++)
	{
		brr[j]=ar[i];
		j++;
	}
	int *crr;
	crr=merge_sort(arr,brr,a,b);
	for(i=0;i<n;i++)
	{
		printf("%d ",crr[i]);
	}
}
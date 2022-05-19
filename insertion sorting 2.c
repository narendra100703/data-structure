#include <math.h>
#include <stdio.h>
void insertion_sort(int *arr, int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++) 
	{
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) 
		{
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
	int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
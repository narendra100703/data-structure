#include<stdio.h>
int merge_sort(int *arr,int l,int m,int h)
{


int i,j,n1,n2,a[100],b[100],k;
n1=m-l+1;
n2=h-m;
k=l;
//printf("n1=%d",k);
//printf("n2=%d",n2);
for(i=0;i<n1;i++)
{
a[i]=arr[k++];
}


k=m+1;
for(i=0;i<n2;i++)
{
b[i]=arr[k++];
}
i=0,j=0;
k=l;
while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
arr[k++]=a[i++];
}
else
{
arr[k++]=b[j++];
}
}
while(i<n1)
{
arr[k++]=a[i++];
}
while(j<n2)
{
arr[k++]=b[j++];
}
// merge(arr ,l,p/2-1,h);

}

  int merge_sort_full(int *arr,int n )
{
int p,i,j,l,h,m;
for(p=2;p<=n;p=p*2)//2 4 8 16...........
{
for(i=0;i<n;i=i+p)//i=0,i=2,i=6,i=8
{
l=i;
h=l+p-1;
m=(l+h)/2;
// printf("p=%d,l=%d,h=%d,m=%d,n=%d,",p,l,h,m,n);
if(h<=n)
merge_sort(arr,l,m,h);
}
}
// printf("p=%d",p);
if(p/2<n)
{
       merge_sort(arr,0,p/2-1,n-1);
     }
}
int main()
{
int n;
scanf("%d",&n);
int arr[100],i;//1 3 2 4 2 4 1 2
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
merge_sort_full(arr,n);
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}

}
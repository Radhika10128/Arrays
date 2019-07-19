#include<stdio.h>
#include<conio.h>
struct elem
{
int val;
int index;
}elem;
int comparator(const void * a,const void * b)
{
int l = ((struct elem *)a)->val;
int r = ((struct elem *)b)->val;
    return (l - r);
}
int main()
{
    int n,min=0,max=0;
    scanf("%d",&n);
    int a[n];
struct elem arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
arr[i].val=a[i];
arr[i].index=i;
}
qsort(arr,n,sizeof(arr[0]),comparator);
min=arr[0].index;
for(int j=1;j<n;j++)
{
    if(arr[j].index-arr[j-1].index>max)
    {
        if(arr[j].index>arr[j-1].index)
            min=arr[j-1].index;
        else
            min=arr[j].index;
        max=arr[j].index-arr[j-1].index;
    }
    else
    {
        if(arr[j].index>arr[j-1].index)
            min=arr[j-1].index;
        else
            min=arr[j].index;
    }
}

printf("%d",max);
}

#include<stdio.h>
#include<conio.h>
struct elem
{
int val;
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
printf("Enter the number of elements");
    scanf("%d",&n);
    int a[n];
struct elem arr[n];
printf("Enter the elements");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
arr[i].val=a[i];
}
int N1,d,b,c,sum=6678798;
printf("Enter the Number");
scanf("%d",&N1);
qsort(arr,n,sizeof(arr[0]),comparator);
for(int i=0;i<n;i++)
{
    int j=i+1,k=n-1;
while(j<k)
{
    int f=arr[i].val+arr[j].val+arr[k].val;
    if(abs(N1-f)<abs(N1-sum))
    {
        sum=f;
        d=arr[i].val;
        b=arr[j].val;
        c=arr[k].val;
    }
     if(f<N1)
    j++;
else
    k--;
}
}
printf("%d %d %d",d,b,c);
printf("Sum is %d",sum);

}

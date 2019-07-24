#include<stdio.h>
int main()
{
int n,l=0,r=0,c=0;
printf("Enter number of elements");
scanf("%d",&n);
int arr[n];
printf("Enter the elements");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int N1,count_zero=0,max=-1;
printf("Enter Number of Replaceable Zeros");
scanf("%d",&N1);

while(r<n)
{
if(arr[r]==1)
{
c++;
r++;
}
else if(arr[r]==0 && count_zero<N1)
{
r++;
c++;
count_zero++;
}
else
{
    if(arr[l]==0)
    {
        l++;
        r=l;
    }
    else{
        while(arr[l]!=0)
        {
            l++;
        }
        l++;
        r=l;
        //printf("%d",l);
    }
    if(max<c)
    {
        max=c;
    }
    printf("%d",c);
    count_zero=0;
    c=0;

}
}
printf("%d",c);
if(c>max)
{
    max=c;
}
printf("%d",max);
}

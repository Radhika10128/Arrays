#include<stdio.h>
int main()
{
int n,max=0;
printf("Enter number of elements");
scanf("%d",&n);
int arr[n];
printf("Enter the elements");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int N1;
printf("Enter Number of Replaceable Zeros");
scanf("%d",&N1);
for(int i=0;i<n;i++)
{
int count_zero=0;
int c=0;
for(int j=0;j<n;j++)
{
if(arr[j]==1)
{
c++;
}
else if(arr[i]==0 && count_zero<N1)
{
c++;
count_zero++;
}
else
{
break;
}
}
if(max<c)
{
max=c;
}
}
printf("%d",max);

}

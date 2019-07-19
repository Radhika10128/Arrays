#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter size of array");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int r=997%n;
for(int j=0;j<r;j++)
{
int x = arr[n - 1];
for (int i = n - 1; i > 0; i--)
arr[i] = arr[i - 1];
arr[0] = x;
}
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
}

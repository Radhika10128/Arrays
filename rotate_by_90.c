#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
printf("Enter the size");
scanf("%d %d",&x,&y);
int arr[x][y];
for(int i=0;i<x;i++)
for(int j=0;j<y;j++)
scanf("%d",&arr[i][j]);

for(int i=0;i<x/2;i++)
{
for(int j=i;j<y-i-1;j++)
{
int temp=arr[i][j];
arr[i][j]=arr[x-1-j][i];
arr[x-1-j][i]=arr[x-1-i][y-1-j];
arr[x-1-i][y-1-j]=arr[j][y-1-i];
arr[j][y-1-i]=temp;
}
}
for(int i=0;i<x;i++)
{
for(int j=0;j<y;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
}

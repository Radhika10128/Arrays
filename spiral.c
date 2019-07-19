#include<stdio.h>
#include<conio.h>
int main()
{
int count=0;
int n;
printf("Enter the size of 2D matrix");
scanf("%d",&n);
int Res[n][n];
int a=0,b=n-1,c=n-1,d=0;
while(a<=c && d<=b)
{
    for(int i=a;i<=b;i++)
    {
    Res[a][i]=count++;
    }
    a++;
    for(int i=a;i<=c;i++)
    {
    Res[i][b]=count++;
    }
    b--;
    for(int i=b;i>=d;i--)
    {
    Res[c][i]=count++;
    }
    c--;
    for(int i=c;i>=a;i--)
    {
    Res[i][d]=count++;
    }
    d++;
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
printf("%d ",Res[i][j]);
}
printf("\n");
}
}

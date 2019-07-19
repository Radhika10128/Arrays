#include<stdio.h>
#include<conio.h>
int main()
{
int count=0;
int n;
printf("Enter the size of 2D matrix");
scanf("%d",&n);
int Res[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&Res[i][j]);
}
}
int a=0,b=n-1,c=n-1,d=0;
while(a<=c && d<=b)
{
    for(int i=a;i<=b;i++)
    {
    printf("%d ",Res[a][i]);
    }
    a++;
    for(int i=a;i<=c;i++)
    {
    printf("%d ",Res[i][b]);
    }
    b--;
    for(int i=b;i>=d;i--)
    {
    printf("%d ",Res[c][i]);
    }
    c--;
    for(int i=c;i>=a;i--)
    {
    printf("%d ",Res[i][d]);
    }
    d++;
}

}

#include<stdio.h>
int main()
{
int n,m,i=0,j=0,x=0;
int Res[20];
printf("Enter number of elements of first and second array");
scanf("%d %d",&n,&m);
int A[n],B[m];
printf("Enter elements of first array");
for(int k=0;k<n;k++)
{
scanf("%d",&A[k]);
}
printf("Enter elements of second array");
for(int k=0;k<m;k++)
{
scanf("%d",&B[k]);
}
while(i<n && j<m)
{
if(A[i]<B[j])
i++;
else if(B[j]<A[i])
j++;
else
{
Res[x]=A[i];
x++;
i++;
j++;
}
}
for(int k=0;k<x;k++)
{
    printf("%d ",Res[k]);
}
}

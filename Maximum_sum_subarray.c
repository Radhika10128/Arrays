#include<stdio.h>
#include<conio.h>
int main()
{
int n,max=0;
printf("Enter size of array");
scanf("%d",&n);
printf("Enter array Elements");
int arr[n];
int a[n];
int sum=0,j=0;
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
    sum=sum+arr[i];
    if(sum>=arr[i])
    {
        a[j]=sum;
        if(sum>max)
            max=sum;
        j++;
    }
    else
    {
        j=0;
        sum=0;
        i--;
    }
    }
printf("%d",max);

}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int n;
    printf("Enter the size of arrays:");
    scanf("%d",&n);

    int l[n];
    int r[n];

    printf("Enter the elements of left array:");
    for(int i=0;i<n;i++)
    scanf("%d",&l[i]);

    printf("Enter the elements of right array:");
    for(int i=0;i<n;i++)
    scanf("%d",&r[i]);

    int max=r[0];
    for(int i=0;i<n;i++)
    {
        if(r[i]>max)
        max=r[i];
    }

    int arr[100],arr1[100];
    for(int i=0;i<max+2;i++)
    {
        arr[i]=i;
        arr1[i]=0;

    }
    for(int i=0;i<n;i++)
    {
        arr1[l[i]]++;
        arr1[r[i]+1]--;

    }
int msum = arr1[0];
int index;
    for (int i = 1; i < max+2; i++) {
        arr1[i] += arr1[i - 1];
        if (msum < arr1[i]) {
            msum = arr1[i];
            index = i;
        }
    }

printf("%d",arr1[index]);
}

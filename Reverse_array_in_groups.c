#include <stdio.h>
int main()
{
    int n,k;
    int temp,t;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int a=0;a<n;a++)
    scanf("%d",&arr[a]);
    printf("Enter the size of group:");
    scanf("%d",&k);

    for(int i=0;i<n;i+=k)
    {
       if((i+k)<=n)
         {
           for(int j=0;j<k/2;j++)
           {
               temp=arr[i+j];
               arr[i+j]=arr[i+k-1-j];
               arr[i+k-1-j]=temp;
           }

         }

       else
        {
            int p=n-i;
            for(int m=0;m<p/2;m++)
            {
                t=arr[i+m];
                arr[i+m]=arr[i+p-1-m];
                arr[i+p-1-m]=t;
            }
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}

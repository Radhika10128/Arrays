#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
int x=1,flag=0;
cout<<"Enter the no of elements of first array";
cin>>n;
int n1;
cout<<"Enter the no of elements of second array";
cin>>n1;
int arr1[n],arr2[n1];
cout<<"Enter the elements of first array";
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}
cout<<"Enter the elements of second array";
for(int i=0;i<n;i++)
{
    cin>>arr2[i];
}
int k;
cout<<"Enter the no of rooms";
scanf("%d",&k);
sort(arr2,arr2+n1);
sort(arr1,arr1+n);
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
    if(arr2[i]>arr1[j])
        x++;
        else
        {
            x--;
            break;
        }
    }
}
if(k<x)
    cout<<"False";
else
    cout<<"True";


}

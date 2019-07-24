#include<iostream>
#include<vector>
using namespace std;
int func(vector<int>&arr)
{
int j=0;
for(int i=0;i<arr.size();i++)
{
if( i<arr.size() && arr[i]==arr[i+2] && arr[i]==arr[i+1])
{
continue;
}
else
{
arr[j++]=arr[i];
}
}
return j;
}
int main()
{
vector<int> arr;
int n,d;
cout<<"Enter number of elements";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>d;
arr.push_back(d);
}
int x=func(arr);
for(int i=0;i<x;i++)
{
cout<<arr[i]<<" ";
}
}


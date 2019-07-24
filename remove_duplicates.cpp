#include<iostream>
#include<vector>
using namespace std;
int func(vector<int>&arr)
{
int j=0;
for(int i=0;i<arr.size();i++)
{
if(arr[i]!=arr[j])
{
j++;
arr[j]=arr[i];
}
}
return j+1;
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

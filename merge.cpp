#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<pair <int,int>>v;
int n,first,second;
cout<<"Enter number of pairs";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>first;
    cin>>second;
    v.push_back(make_pair(first,second));
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++)
{
    if(v[i].second>=v[i+1].first)
    {
        if(v[i].second<v[i+1].second)
        {
            v[i].second=v[i+1].second;
            v.erase(v.begin()+i+1);
            i--;
        }
    }
}
 for (int i=0; i<v.size(); i++)
    {
        cout << v[i].first << " "
             << v[i].second << endl;
    }
}

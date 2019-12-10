#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());

    for(int j=0;j<n;j++)cout<<v[j]<<" ";
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,d,m,sum=0,r;
    cin>>n>>d;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]>=(2*d)){
            r=(v[i+1]-v[i])-(2*d);
            if(r==0)sum=sum+1;
            else sum=sum+2;
        }
    }
    cout<<sum+2<<endl;
}

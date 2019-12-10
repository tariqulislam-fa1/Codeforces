#include<iostream>
using namespace std;
int main()
{
    int t,i,j,r;
    cin>>t;
    int n[t],m[t];

    for(i=0;i<t;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<t;i++)
    {
        r=n[i]-1;
        m[r]=i+1;
    }
    for(i=0;i<t;i++)
    {
        cout<<m[i]<<" ";
    }
}


#include<iostream>
using namespace std;
int main()
{
    int n,v,i,j,r;

    cin>>n>>v;
    if(v>=n)cout<<n-1<<endl;
    else {
        int sum=v;
    r=n-v;

    for(i=2;i<=r;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    }

    return 0;

}


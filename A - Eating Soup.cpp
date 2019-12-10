#include<iostream>
using namespace std;
int main()
{
    int n,m;

    cin>>n>>m;

    if(n%2==0){
        if(m==0 || m==1)cout<<"1"<<endl;
        else if(m==n-1)cout<<"1"<<endl;
        else if(m==n/2)cout<<n/2<<endl;
        else if(m>n/2)cout<<n-m<<endl;
        else cout<<m<<endl;
    }
    else {
        if(m==0 || m==1)cout<<"1"<<endl;
        else if(m==n-1)cout<<"1"<<endl;
        else if(m==n/2 || m==(n/2)+1)cout<<n/2<<endl;
        else if(m>n/2)cout<<n-m<<endl;
        else cout<<m<<endl;
    }


}

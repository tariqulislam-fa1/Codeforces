#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j,k,sum=0;

    cin>>n;
    char str[n];
    for(i=0;i<n;i++)cin>>str[i];

    for(i=0;i<n;i++){
        if(str[i]%2==0)sum=sum+i+1;
    }
    cout<<sum<<endl;
}


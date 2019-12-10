#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=1;
    cin>>n;

    for(int i=2;i<=n;i++){
        sum=sum+(4*(i-1));
    }
    cout<<sum<<endl;
}

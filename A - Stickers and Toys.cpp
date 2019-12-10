#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,T,r;
    long long int s;
    cin>>T;

    while(T--){
        cin>>n>>s>>t;

        if(s>t){
            r=(n-s)+(s-t)+1;
            cout<<r<<endl;
        }
        else {
            r=(n-t)+(t-s)+1;
            cout<<r<<endl;
        }
    }
}

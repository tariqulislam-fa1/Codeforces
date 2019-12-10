#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    long long int a,b,c,sum=0;
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>a>>b>>c;

        sum=a+b+c;


        cout<<sum/2<<endl;
        sum=0;
    }
}


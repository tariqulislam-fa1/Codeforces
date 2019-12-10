#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    long long int s,a,b,c,res,res1,res2,res3;
    cin>>t;

    for(i=1;i<=t;i++){
        cin>>s>>a>>b>>c;
        res=s/c;
        if(res>=a){
            res1=res/a;
            res2=res1*b;
            res3=res+res2;
            cout<<res3<<endl;
        }
        else cout<<res<<endl;
    }

    return 0;
}

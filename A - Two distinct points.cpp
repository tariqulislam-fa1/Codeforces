#include<iostream>
using namespace std;
int main()
{
    int n,i,j,res1,res2;
    int l1,r1,l2,r2;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>l1>>r1;
        cin>>l2>>r2;

        res1=(l1+r1)/2;
        res2=(l2+r2)/2;

        if(res1!=res2)cout<<res1<<" "<<res2<<endl;
        else cout<<res1<<" "<<res2+1<<endl;


    }
    return 0;
}

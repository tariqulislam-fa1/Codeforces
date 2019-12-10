#include<iostream>
using namespace std;
int main()
{
    int q,a,b,i,j,r;
    long long int n,res1,res2,p;
    cin>>q;
    long long int arr[q];

    for(i=0;i<q;i++)
    {
        cin>>n>>a>>b;
        res1=n*a;
        if(n%2==0)res2=(n/2)*b;
        else res2=((n-1)/2)*b+a;
        if(res1>res2)cout<<res2<<endl;
        else cout<<res1<<endl;
    }


    return 0;
}

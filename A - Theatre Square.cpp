#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a,r,r1,div,rem,res,div1;
    cin>>n>>m>>a;
    div=n/a;
    div1=m/a;

    if(n*m<a*a){
        cout<<"1"<<endl;
    }
    else {
        if(n%a!=0)div++;
        if(m%a!=0)div1++;

        res=div*div1;
        cout<<res<<endl;
    }

    return 0;
}

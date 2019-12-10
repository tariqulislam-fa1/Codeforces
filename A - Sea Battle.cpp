#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,i,j,r;
    long long int res;
    cin>>a>>b>>c>>d;

    if(a==c)res=(2*(b+1))+a+(2*(d+1))+c;
    else{
        r=a-c;
        res=((2*(b+1))+a+(2*(d+1))+c)+r;
    }
    cout<<res<<endl;
}


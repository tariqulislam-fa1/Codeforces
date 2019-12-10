#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    int a,b,c;
    int r,s;

    cin>>x>>y>>z;
    cin>>a>>b>>c;

    if(x>a)cout<<"NO"<<endl;
    else {
        r=(a-x)+b;
        s=(a+b+c)-(x+y);
        if(y>r)cout<<"NO"<<endl;
        else if(z>s)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,z;
    cin>>a>>b>>c>>d;

    if(a>=b && a>=c){
        if(b>=c){
            x=a;
            y=b;
            z=c;
        }
        else {
            x=a;
            y=c;
            z=b;
        }
    }
    else if(b>=a && b>=c){
        if(a>=c){
            x=b;
            y=a;
            z=c;
        }
        else {
            x=b;
            y=c;
            z=a;
        }
    }
    else {
        if(a>=b){
            x=c;
            y=a;
            z=b;
        }
        else {
            x=c;
            y=b;
            z=a;
        }
    }
    //cout<<x<<" "<<y<<" "<<z<<endl;
    int p=y,r1=0,r=0;

    if(x-y<d || y-z<d){
        if(y-z<d){
            y=z+d;
            r=y-p;
        }

        //cout<<r<<endl;
        if(x-y<=d && y-x<=d){
            r1=(y+d)-x;
        }
    }
    //cout<<r<<" "<<r1<<endl;
    if(r>r1)cout<<r<<endl;
    else cout<<r1<<endl;
}

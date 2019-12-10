#include<iostream>
using namespace std;
int main()
{
    int a,b,i,c=0;
    cin>>a>>b;
    int r=a,r1=b;
    for(i=1;r<=r1;i++)
    {
        r=3*r;
        r1=2*r1;
        c++;
    }
    cout<<c<<endl;

    return 0;
}

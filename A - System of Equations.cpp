#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,c=0;
    int r,r1,r2,r3;
    cin>>n>>m;
    for(i=0;i*i<=n;i++)
    {
        r=(i*i);
        r1=(n-r);
        r2=r+r1;
        r3=(r1*r1)+i;
        if(r2==n && r3==m)c++;
    }
    cout<<c<<endl;
}

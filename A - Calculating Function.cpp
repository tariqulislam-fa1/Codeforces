#include<iostream>
using namespace std;
int main()
{
    long long int n,i,j,sum=0,r;
    cin>>n;

    if(n%2==0)sum=n/2;
    else {
        r=(n-1)/2;
        sum=r-n;
    }
    cout<<sum<<endl;

    return 0;
}

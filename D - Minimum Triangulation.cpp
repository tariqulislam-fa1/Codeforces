#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        sum=sum+(i*(i+1));
    }
    cout<<sum<<endl;
}


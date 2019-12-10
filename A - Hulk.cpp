#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0){
            if(i==n)cout<<"I hate it ";
            else cout<<"I hate that ";
        }
        else {
            if(i==n)cout<<"I love it ";
            else cout<<"I love that ";
        }

    }

    return 0;
}

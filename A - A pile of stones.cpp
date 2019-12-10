#include<iostream>
using namespace std;
int main()
{
    int n,c=0;

    cin>>n;
    char str[n];

    for(int i=0;i<n;i++)cin>>str[i];

    for(int i=0;i<n;i++)
    {
        if(str[i]=='+')c++;
        else c--;

        if(c<0)c=0;
    }

    cout<<c<<endl;
}


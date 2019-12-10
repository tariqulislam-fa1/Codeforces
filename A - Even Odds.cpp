#include<iostream>
using namespace std;
int main()
{
    long long int n,k,i,j,e,s,o;
    cin>>n>>k;
    if(n%2==0)o=n/2;
    else o=(n/2)+1;
     e=k-o;

    if(k<=o){
        s=k+(k-1);
    }
    else s=e+e;

    cout<<s<<endl;

    return 0;
}

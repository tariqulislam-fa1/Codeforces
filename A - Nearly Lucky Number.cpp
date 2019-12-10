#include<iostream>
using namespace std;
int main()
{
    long long int n,div,rem,c=0;
    int i,j;
    cin>>n;
    div=n;

    for(i=1;div!=0;i++){
        rem=div%10;
        if(rem==4 || rem==7)c++;
        div=div/10;

    }
    if(c==4 || c==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}


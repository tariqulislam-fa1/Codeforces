#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mi,ma;
    long long int c=0,m,x=1;
    cin>>n>>m;

    for(int i=2;i<=n;i++){
        for(int j=1;j<=x;j++){
            c++;
        }
        x++;
        if(c>=m){
            ma=i;
            break;
        }
    }
    if(n<=m || 2*m==n)mi=0;
    else {
        mi=n-(2*m);
        if(mi<0)mi=0;
    }


    if(m>0)cout<<mi<<" "<<n-ma<<endl;
    else cout<<n<<" "<<n<<endl;
}

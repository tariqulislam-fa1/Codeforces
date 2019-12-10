#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,rem;
    cin>>a;


    for(int i=a;;i++){
            int div=i,sum=0;
        for(int j=1;div!=0;j++){
            rem=div%10;
            div=div/10;
            sum=sum+rem;
        }
        if(sum%4==0){
            cout<<i<<endl;
            break;
        }
    }
}

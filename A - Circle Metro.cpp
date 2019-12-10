#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    int r,r1;
    if(c>b)r=c-b;
    else {
        r=(a-b)+c;
    }
    if(d>e)r1=d-e;
    else {
        r1=d+(a-e);
    }

    if(r>r1)swap(r,r1);

    for(int i=0;i<r;i++){
        if(b<a)b++;
        else b=1;
        if(d>1)d--;
        else d=a;
        if(b==d){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


}

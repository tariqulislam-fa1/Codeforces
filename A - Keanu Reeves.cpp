#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0;

    cin>>n;
    char ch[n];

    for(int i=0;i<n;i++){
        cin>>ch[i];
    if(ch[i]=='0')c++;
    if(ch[i]=='1')d++;
    }
    //cout<<c<<" "<<d;

    if(c!=d){
        cout<<"1"<<endl;
        for(int i=0;i<n;i++)cout<<ch[i];
        cout<<endl;
    }

    else {
        cout<<"2"<<endl;
        for(int i=0;i<n;i++){
            if(i==0)cout<<ch[i]<<" ";
            else cout<<ch[i];
        }
        cout<<endl;
    }

}

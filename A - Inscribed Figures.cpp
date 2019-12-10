#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,sum=0,inf=0;

    vector<int>v;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }

    for(int i=0;i<n-1;i++)
    {
        if(v[i]==2 && v[i+1]==3 || v[i]==3 && v[i+1]==2){
            inf++;
            break;
        }

        else {
            if(v[i]==1 && v[i+1]==2 || v[i]==2 && v[i+1]==1)sum=sum+3;
            else sum=sum+4;
        }
        if(i>=1)if(v[i]==1 && v[i-1]==3 && v[i+1]==2)sum=sum-1;
    }

    if(inf==1)cout<<"Infinite"<<endl;
    else {
        cout<<"Finite"<<endl;
        cout<<sum<<endl;
    }
}

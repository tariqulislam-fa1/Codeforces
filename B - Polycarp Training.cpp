#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int main()
{
    int n,m,i,c=0,x=1;
    vector<int>v;
    cin>>n;


    for( i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());

    for(int j=0;j<n;j++){
        if(v[j]>=x){
            x++;
            c++;
        }
    }
    cout<<c<<endl;
}

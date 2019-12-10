#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<char>v;
    char ch;
    int n,x,y,c=0;
    cin>>n>>x>>y;
    //int r=str.length();

    for(int i=0;i<n;i++){
        cin>>ch;
        v.push_back(ch);
    }

    int r1=n-y-1;
    int r2=n-x;
    if(v[r1]=='0')c++;
    //cout<<<<endl;
    for(int j=r2;j<n;j++){
        if(j==r1)continue;

        if(v[j]=='1')c++;
    }

    cout<<c<<endl;
}


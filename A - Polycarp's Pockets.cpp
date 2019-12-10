#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,d=0;
    cin>>n;
    vector<int>v;
    int a[n],l=0;

    for(int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(v[j]<v[j+1])swap(v[j],v[j+1]);
        }
    }
    a[0]=1;
    for(int k=0;k<n-1;k++){

        if(v[k]==v[k+1]){
            a[l]++;
            d++;
        }
        else{
            if(d>0)l++;
            a[l]=1;
            d=0;
        }
    }
    int ma=a[0];
    for(int y=1;y<=l;y++){
        if(a[y]>ma)ma=a[y];
    }
    cout<<ma<<endl;
}

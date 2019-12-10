#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    cin>>k;
    int l=n+1;
    for(int j=0;j<n;j++){
            l--;
        if(k>=a[j] && k<=b[j])break;
    }
    cout<<l<<endl;


}

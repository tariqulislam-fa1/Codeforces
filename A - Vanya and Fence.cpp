#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,sum=0;
    cin>>n>>h;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    for(int j=0;j<n;j++){
        if(arr[j]>h)sum=sum+2;
        else sum=sum+1;
    }

    cout<<sum<<endl;
}

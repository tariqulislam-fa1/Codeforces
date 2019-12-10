#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,m,d=0;
    cin>>n;
    if(n%2==0)m=n/2;
    else m=(n/2)+1;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)c++;
        if(arr[i]<0)d++;
    }
    if(c>=m || d>=m){
        if(c>=m)cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
    else cout<<"0"<<endl;

}

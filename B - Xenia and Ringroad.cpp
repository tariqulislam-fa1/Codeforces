#include<iostream>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n>>m;
    int arr[m];

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    long long int sum=arr[0]-1;
    for(int i=1;i<m;i++){
        if(arr[i]>=arr[i-1])r=arr[i]-arr[i-1];
        else {
            r=(n-arr[i-1])+(arr[i]-1)+1;

        }
        sum=sum+r;
    }
    cout<<sum<<endl;
}

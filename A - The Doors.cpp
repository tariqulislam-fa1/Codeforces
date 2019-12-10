#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,c=0,d=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++){
        if(arr[i]==0){
                d=0;
            c++;
        }
        else {
            //ar[j]=c;
            c=0;
            d++;
        }
    }
    int res=max(c,d);

    cout<<n-res<<endl;
}

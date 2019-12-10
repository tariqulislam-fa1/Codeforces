#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,j,k,r;
    cin>>n;
    long long int arr[n];

    for(i=0;i<n;i++) cin>>arr[i];
    long long int sum=arr[n-1];

    for(j=n-2;j>=0;j--){
            //if(arr[j]==0)break;
            if(arr[j]<arr[j+1])sum=sum+arr[j];
            else {
                r=arr[j+1]-1;
                if(r==0)break;

                    sum=sum+r;
                    arr[j]=r;
            }
    }
    cout<<sum<<endl;

}


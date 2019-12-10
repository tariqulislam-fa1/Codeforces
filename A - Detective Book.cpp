#include<iostream>
using namespace std;
int main()
{
    int n,temp,l,c=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j])arr[i]=arr[i];
            else {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k=0;k<n;k++){
        l=k+1;
        if(arr[k]==l)c++;
    }
    cout<<c<<endl;

}

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,r=0;
    int a=0,b=0,c=0,d=0;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==4)a++;
        else if(arr[i]==3)b++;
        else if(arr[i]==2)c++;
        else d++;
    }
    if(b<=d || b>d){
        if(b==d){
            //sum=sum+b;
            d=0;
        }
        else if(d>b){
            //sum=sum+b;
            d=d-b;
        }
        else {

            d=0;
        }
    }
        if(c>0 || d>0){
            if((2*c+d)%4==0)r=((2*c+d)/4);
            else r=((2*c+d)/4)+1;
        }
        cout<<a+b+r<<endl;

}

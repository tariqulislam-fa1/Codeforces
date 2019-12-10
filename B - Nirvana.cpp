#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int div=n,rem;
    int ma=0,pro=1,c=0;
    int arr[10];

    for(i=0;div!=0;i++){
        rem=div%10;
        div=div/10;
        arr[i]=rem;
        c++;
    }
    for(int j=0;j<c;j++){
                if(arr[j]==0)continue;
            pro=pro*arr[j];
        }
    ma=pro;
    pro=1;
    //cout<<c<<endl;

    for(int j=0;j<c-1;j++){
        if(arr[j]<9){
            arr[j]=9;
            arr[j+1]=arr[j+1]-1;
        }
        //for(int j=0;j<c;j++)cout<<arr[j]<<" ";

        for(int j=0;j<c;j++){
                if(arr[j]==0)continue;
            pro=pro*arr[j];
        }
        if(ma<pro)ma=pro;
        pro=1;
    }
    cout<<ma<<endl;

}

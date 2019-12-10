#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int temp,n,c=0;
    cin>>n;

    for(int l=1;l<=n;l++){
            cin>>str;
            int r=str.size();
        for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            if(str[i]>str[j])str[i]=str[i];
            else{
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    //cout<<str<<endl;

    for(int k=0;k<r;k++){
        if(str[k]-str[k+1]==1)c++;
    }
    if(c==(r-1))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    c=0;
    }

}

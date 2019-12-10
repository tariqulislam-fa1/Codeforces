#include<iostream>
using namespace std;

int main()
{

    int b,k,a,i;
    int c,d=0,e=0;
    cin>>b>>k;

    for(i=1;i<=k;i++){
        cin>>a;
        if(b%2==0){
                if(i==k){
                        e--;
                    if(a%2==0)cout<<"even"<<endl;
                    else cout<<"odd"<<endl;
                }
        }
        else {
            if(a%2==0)d++;
            else e++;
        }

    }
    if(e>=0){
        if(e%2==0)cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    //else cout<<"odd";
    return 0;

}


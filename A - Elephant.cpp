#include<iostream>
using namespace std;
int main()
{
    int x,i,j,c=0;
    cin>>x;
    int r=x;
    while(r!=0)
    {
        if(r-5>=0){
            c++;
            r=r-5;
        }
        else if(r-4>=0){
            c++;
            r=r-4;
        }
        else if(r-3>=0){
            c++;
            r=r-3;
        }
        else if(r-2>=0){
            c++;
            r=r-2;
        }
        else {
            c++;
            r=r-1;
        }
    }
    cout<<c<<endl;
}

#include<iostream>
using namespace std;
int main()
{
    int i,j,c=0,d=0;
    string str;
    cin>>str;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)c++;
        else d++;
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(d>=c){
            if(str[i]>=65 && str[i]<=90)str[i]=str[i]+32;
        }
        else {
            if(str[i]>=97 && str[i]<=122)str[i]=str[i]-32;
        }
    }
    cout<<str;

    return 0;
}


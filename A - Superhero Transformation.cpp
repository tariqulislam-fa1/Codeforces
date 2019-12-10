#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str,str1;
    int i,j,k,c=0,d=0,l,m;


    cin>>str>>str1;
    //bool len=str.length()>str1.length();

    k=str.length();
    j=str1.length();
    for(i=0;str[i]!='\0' || str1[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')c++;
            else break;
        }
        else{
            if(str1[i]!='a'&&str1[i]!='e'&&str1[i]!='i'&&str1[i]!='o'&&str1[i]!='u')c++;
            else break;
        }

    }
    if(j!=k && c!=j || c!=k)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    return 0;


}

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<iomanip>
#include<String>
using namespace std;
int main()
{
    int h1,m1,h2,m2,i,j;
    int r,res1,r1,res;
    char ch[2],ch1[2];
    scanf("%d%c%d",&h1,&ch,&m1);
    scanf("%d%c%d",&h2,&ch1,&m2);
    /*cin>>h1;
    cout<<":";
    cin>>m1;
    cin>>h2;
    cout<<":";
    cin>>m2;*/


    /*if(res%2!=0){
        res1=res-1;
        r1=r+30;
    }
    else  {
        res1=res/2;
        r1=r/2;
    }*/
    if(m1<m1){
        r=(60-m1)+m2;
        res=(h2-h1)-1;
    }
    else {
        res=h2-h1;
    r=m2-m1;
    }
    int fi=((res*60)+r)/2;
    int fin=((fi+m1)/60)+h1;
    int fin1=(fi+m1)%60;

    if(fin<10 && fin1<10)cout<<"0"<<fin<<":"<<"0"<<fin1<<endl;
    else if(fin<10 && fin1>=10)cout<<"0"<<fin<<":"<<fin1<<endl;
    else if(fin>=10 && fin1<10)cout<<fin<<":"<<"0"<<fin1<<endl;
    else cout<<fin<<":"<<fin1<<endl;
}

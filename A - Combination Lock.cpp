#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
   int n,sum=0;
   cin>>n;
   char str[n];
   string str1;

   for(int i=0;i<n;i++)cin>>str[i];

   cin>>str1;

   for(int i=0;i<n;i++)
   {
       int a=str[i]-48;
       int b=str1[i]-48;

       int r=abs(a-b);
       int r1=(10-b)+a;
       int r2=(10-a)+b;

       int m=min(r,r1);
       int m1=min(m,r2);

       sum=sum+m1;
   }

   cout<<sum<<endl;

}

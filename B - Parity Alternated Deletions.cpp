#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,m,sum=0,c=0;
    scanf("%d",&t);
    vector<int>v,v1;
    //vector<int>::iterator it;

    for(int i=0; i<t; i++)
    {
        scanf("%d",&m);
        if(m%2==0)
            v.push_back(m);
        else
            v1.push_back(m);

    }

    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());

    int l=v.size();
    int l1=v1.size();

    if(l>l1)l--;
    else if(l1>l) l1--;

    int r=abs(l-l1);

    if(r<=0)
        printf("0\n");

    else
    {
        if(l>l1)
            for(int j=0; j<r; j++)
                sum=sum+v[j];
        else
            for(int j=0; j<r; j++)
                sum=sum+v1[j];

        printf("%d\n",sum);
    }


}

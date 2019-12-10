#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    vector<int>v,v1,v2;

    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        v.push_back(a);
        v1.push_back(b);
        v2.push_back(c);
    }
    int f=accumulate(v.begin(),v.end(),0);
    int s=accumulate(v1.begin(),v1.end(),0);
    int th=accumulate(v2.begin(),v2.end(),0);

    if(f==0 && s==0 && th==0)printf("YES\n");
    else printf("NO\n");

}


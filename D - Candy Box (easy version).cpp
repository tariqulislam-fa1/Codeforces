#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,m;
    vector<int>v,v1;
    cin>>q;

    while(q--)
    {
        int c=1;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());

        for(int i=0; i<n-1; i++)
        {
            if(v[i]==v[i+1])
                c++;
            else
            {
                v1.push_back(c);
                c=1;
            }

        }
        v1.push_back(c);
        sort(v1.begin(),v1.end());
        int sum=v1[v1.size()-1];

        for(int j=v1.size()-2; j>=0; j--)
        {
            int r=v1[j];
            if(r>=v1[j+1])
            {
                r=v1[j+1]-1;
                v1[j]=r;
            }
            //cout<<r<<endl;
            if(r>0)
                sum=sum+r;
        }

        cout<<sum<<endl;

        v.clear();
        v1.clear();

    }
}

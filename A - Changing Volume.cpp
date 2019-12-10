#include <iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int t,a,b,s,rem;
    cin>>t;

    while(t--)
    {
        int s=0;
        cin>>a>>b;

        int c=abs(a-b);

        while(1)
        {

            if(c>=5)
        {
           s=s+c/5;
           c=c%5;
        }
        else if(c>=2)
        {
            s=s+c/2;
           c=c%2;
        }
        else
        {
            s=s+c/1;
           c=c%1;
        }
        if(c==0)break;
        }

        cout<<s<<endl;
    }
}

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    //double dob;
    //long long int n;
    scanf("%d",&t);
    long long int arr[t];

    for(int j=0; j<t; j++)
        cin>>arr[j];

    for(int k=0; k<t; k++)
    {
        int c=0;
        long long int dob;

        dob=sqrt(arr[k]);

        if(dob*dob!=arr[k] || arr[k]==1)
        {
            printf("NO\n");
        }
        else
        {
            if(dob==2)
            {
                printf("YES\n");
                continue;
            }
            if(dob%2==0)
            {
                printf("NO\n");
                continue;
            }

            for(int i=2; i*i<=dob; i++)
            {
                if(dob%i==0)
                {
                    printf("NO\n");
                    c=1;
                    break;
                }
            }
            if(c==0)
                printf("YES\n");
        }

    }


}

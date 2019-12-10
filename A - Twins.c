#include<stdio.h>
int main()
{
    int t,i,j,k,l,m=1,res,temp;
    int sum=0,sum1=0;
    scanf("%d",&t);
    int n[t];

    for(i=0;i<t;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++){
        for(j=i+1;j<t;j++){
            if(n[i]<n[j]){
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }
    for(j=0;j<t;j++){
        for(k=0;k<m;k++){
            sum=sum+n[k];
        }

        for(l=m;l<t;l++){
            sum1=sum1+n[l];
        }
        if(sum>sum1){
            break;
        }
        m++;
        sum=0;
        sum1=0;
    }
    printf("%d\n",m);

    return 0;
}

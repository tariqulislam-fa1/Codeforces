#include<stdio.h>
int main()
{
    int n,i,k,c=1,j=-1;
    scanf("%d",&n);
    int a[n],b[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;j<n-2;i++){
        for(j=j+1;j<n-1;j++){
            if(a[j]<=a[j+1])c++;
            else break;
        }
        b[i]=c;
        c=1;
    }
    int max=b[0];
    for(k=1;k<i;k++){
        if(max<b[k])max=b[k];
    }
    printf("%d\n",max);

    return 0;
}

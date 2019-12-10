#include<stdio.h>
int main()
{
    int n,i,j,k,max=-1,res=0;
    int a,b;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        res=res+(b-a);
        if(res>max)max=res;
    }
    printf("%d\n",max);

    return 0;
}

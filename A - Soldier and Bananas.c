#include<stdio.h>
int main()
{
    int k,n,w,i,j,cost=0,res;
    scanf("%d %d %d",&k,&n,&w);

    for(i=1;i<=w;i++){
        cost=cost+(k*i);
    }
    res=cost-n;
    if(res<=0)printf("0\n");
    else printf("%d\n",res);

    return 0;
}

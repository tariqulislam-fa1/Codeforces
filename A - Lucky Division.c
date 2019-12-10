#include<stdio.h>
int main()
{
    int n,i,j,b=0,rem,div;
    scanf("%d",&n);
    div=n;

    for(i=1;div!=0;i++){
        rem=div%10;
        div=div/10;
        if(rem!=4 && rem!=7){
            b++;
            break;
        }

    }
    if(b!=1)printf("YES\n");
    else if(n%4==0 || n%7==0 || n%47==0 || n%744==0)printf("YES\n");
    else printf("NO\n");

    return 0;
}

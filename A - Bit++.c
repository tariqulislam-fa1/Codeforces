#include<stdio.h>
int main()
{
    char str[4],a,b,c;
    int n,i,x=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%s",str);

        if(str[1]=='+')x++;
        //else if()x++;
        //else if(a=='-' && b=='-' && c=='x')--x;
        else x--;

    }
    printf("%d\n",x);

    return 0;
}

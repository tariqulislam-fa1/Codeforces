#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,res,i;
    char str[100];

    scanf("%d",&n);

    for(i=0;i<=n;i++){
        gets(str);
    l=strlen(str);

    if(l>10){
        res=l-2;
        printf("%c%d%c\n",str[0],res,str[l-1]);
    }
    else printf("%s\n",str);
    }

    return 0;
}

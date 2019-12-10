#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    int i,j,l,c=0,d=0,res;
    scanf("%s",str);
    l=strlen(str);
    res=l/2;

    j=l-1;

    for(i=0;i<res;i++){
        if(str[i]==str[j])c++;
        else d++;
        j--;
    }
    if(l%2==0){
        if(c==res-1 && d==1)printf("YES\n");
    else printf("NO\n");
    }
    else {
        if(c==res || c==res-1 && d==0 || d==1)printf("YES\n");
    else printf("NO\n");
    }

    return 0;
}

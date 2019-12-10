#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,l,c=0;
    char s[101],t[101];
    gets(s);
    gets(t);
    l=strlen(s);
    int k=l-1;

    for(i=k;i>=0;i--){
        if(s[i]==t[j])c++;
        j++;


    }
    if(c==l)printf("YES\n");
    else printf("NO\n");

    return 0;
}

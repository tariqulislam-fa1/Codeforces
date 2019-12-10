#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    int l,l1,i,j,res;
    scanf("%s%s",s,s1);

    l=strlen(s);
    l1=strlen(s1);

    for(i=0;i<l;i++){
       if(s[i]>=97 && s[i]<=122)
        s[i]=s[i]-32;
    }
    for(j=0;j<l1;j++){
        if(s1[j]>=97 && s1[j]<=122)
        s1[j]=s1[j]-32;
    }
    res=strcmp(s,s1);

    printf("%d\n",res);

    return 0;
}

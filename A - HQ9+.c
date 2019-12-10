#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k,l,b=0;
    scanf("%s",str);
    l=strlen(str);

    for(i=0;i<l;i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            b++;
            break;
        }
    }
    if(b>0)printf("YES\n");
    else printf("NO\n");

    return 0;
}

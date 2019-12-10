#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,count=1,l;
    scanf("%s",str);
    l=strlen(str);

    for(i=0;i<l;i++){
        if(str[i]==str[i+1]){
            count++;
            if(count==7)break;
        }
        else count=1;
    }
    if(count>=7)printf("YES\n");
    else printf("NO\n");

    return 0;
}

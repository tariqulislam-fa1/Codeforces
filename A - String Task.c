#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k;
    char str[100];
    gets(str);

    for(i=0;str[i]!='\0';i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]=str[i]+32;
            }
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y'){

            printf(".%c",str[i]);
        }
    }

    return 0;

}


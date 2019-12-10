#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int i,j,k,l;
    gets(str);
    l=strlen(str);

    for(i=0;i<l;i+=2){
        for(j=i+2;j<l;j+=2){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);


    return 0;
}

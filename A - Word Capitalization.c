#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char str[10000];
    scanf("%s",str);

    if(str[0]>=97 && str[0]<=122){
            str[0]=str[0]-32;
        }
    printf("%s\n",str);

    return 0;
}

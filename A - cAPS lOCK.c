#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k,l,d=0,a=0;
    scanf("%s",str);
    l=strlen(str);
    if(str[0]>=97 && str[0]<=122)a++;

    for(j=0;j<l;j++){

        if(str[j]>=65 && str[j]<=90)d++;
    }
    if(d==l || (a==1 && d==l-1)){
        //if(str[0]>=97 && str[0]<=122)str[0]=str[0]-32;

    for(i=0;i<l;i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
        else str[i]=str[i]-32;
    }
    }
    printf("%s\n",str);

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l,c=0;
    char str[50];
    scanf("%d",&n);
    scanf("%s",str);
    l=strlen(str);

    for(i=0;i<l;i++){
            j=i+1;
        if(str[i]==str[j]){
            c++;
        }
    }

    printf("%d\n",c);

    return 0;
}


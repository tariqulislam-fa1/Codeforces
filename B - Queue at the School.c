#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,k,i,j,temp,l;
    scanf("%d %d",&a,&b);
    char str[a];

        scanf("%s",str);

    for(j=1;j<=b;j++){
        for(k=0;k<a-1;k++){
            if(str[k]<str[k+1]){
                temp=str[k];
                str[k]=str[k+1];
                str[k+1]=temp;
                k++;
            }
        }
    }
        printf("%s",str);

    return 0;
}

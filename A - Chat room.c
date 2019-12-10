#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k,l,m,n,c=0;
    scanf("%s",str);
    l=strlen(str);

    if(l<=4)printf("NO\n");
    if(l>4){
        for(i=0;i<l-4;i++){
            if(str[i]=='h')
                for(j=i+1;j<l-3;j++)
            if(str[j]=='e')
                for(k=j+1;k<l-2;k++)
            if(str[k]=='l')
                for(m=k+1;m<l-1;m++)
            if(str[m]=='l')
                for(n=m+1;n<l;n++)
            if(str[n]=='o'){
                c++;
            }
        }
        if(c==0)printf("NO\n");
    else printf("YES\n");
    }


    return 0;
}

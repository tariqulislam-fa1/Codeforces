#include<stdio.h>
int main()
{
    int a,b,c,i;
    int res1,res2,res3,res4,res5;

    scanf("%d %d %d",&a,&b,&c);

    res1=a+b*c;
    res2=a*(b+c);
    res3=(a+b)*c;
    res4=a*b*c;
    res5=a+b+c;

    if(res1>=res2 && res1>=res3 && res1>=res4 && res1>=res5){
        printf("%d\n",res1);
    }
    else if(res2>=res1 && res2>=res3 && res2>=res4 && res2>=res5){
        printf("%d\n",res2);
    }
    else if(res3>=res1 && res3>=res2 && res3>=res4 && res3>=res5){
        printf("%d\n",res3);
    }
    else if(res4>=res1 && res4>=res2 && res4>=res3 && res4>=res5){
        printf("%d\n",res4);
    }
    else printf("%d\n",res5);

    return 0;
}

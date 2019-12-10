#include<stdio.h>
 int main()
 {
     int y,i,j,k;
     int div1,div2,div3,div4,mod1,mod2,mod3,mod4;
     scanf("%d",&y);
     y=y+1;

     for(i=1;;i++){

     div1=y/10;
        mod1=y%10;
     div2=div1/10;
        mod2=div1%10;
     div3=div2/10;
        mod3=div2%10;
     div4=div3/10;
        mod4=div3%10;
     if(mod1!=mod2 && mod1!=mod3 && mod1!=mod4 && mod2!=mod3 && mod2!=mod4 && mod3!=mod4)break;
     else y++;
     }
     printf("%d\n",y);

     return 0;
 }

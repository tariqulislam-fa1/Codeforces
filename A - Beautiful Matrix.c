#include<stdio.h>
int main()
{
    int arr[5][5];
    int i,j,k;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                if(i>=2 && j>=2)k=(i-2)+(j-2);
                else if(i>=2 && j<=2)k=(i-2)+(2-j);
                else if(i<=2 && j>=2)k=(2-i)+(j-2);
                else k=(2-i)+(2-j);
            }
        }
    }

    printf("%d\n",k);

    return 0;
}

/******************************************************************************
1. 從鍵盤輸入兩個數，求出其最大值s
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a , b;
    printf("input two numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a > b)
           printf("%d", a);
    else if(a < b)
           printf("%d", b);
    
     return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=1234;
    
    printf("no=%d\n",no);
    printf("no=%.6d\n",no);/* 精度設定為.6 */ 
    printf("no=%.8d\n",no);/* 精度設定為.8 */ 
    printf("no=%.2d\n",no);/* 精度設定值小於原本的顯示字元數 */ 
    
    system("pause");
    return 0;
}

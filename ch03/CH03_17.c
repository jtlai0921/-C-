#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1;
    
    
    printf("請輸入一個字元:"); 
    scanf(" %c",&c1);/* 連續輸入一個字元 */     
    
    printf("c1=%c ASCII碼=%d\n",c1,c1); /* 輸出字元及ASCII碼 */ 
   
    
    system("pause");
    return 0;
}

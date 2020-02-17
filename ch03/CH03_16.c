#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1,c2;
    
    
    printf("請輸入兩個字元:"); 
    scanf("%c%c",&c1,&c2);/* 連續輸入兩個字元 */     
    
    printf("c1=%c ASCII碼=%d\n",c1,c1); /* 輸出字元及ASCII碼 */ 
    printf("c2=%c ASCII碼=%d\n",c2,c2); /* 輸出字元及ASCII碼 */     
    
    system("pause");
    return 0;
}

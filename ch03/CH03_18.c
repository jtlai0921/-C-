#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2;
    char c1,c2;
    
    printf("請輸入一個整數v1:");
    scanf("%d",&v1);/* 連續輸入一個整數 */   
    printf("請輸入一個字元c1:"); 
    scanf("%c",&c1);/* 連續輸入一個字元 */ 
    printf("v1=%d c1的ASCII碼=%d\n",v1,c1); /* 輸出v1值及c1的ASCII碼 */    
    
    printf("請輸入一個整數v2:");
    scanf("%d",&v2);/* 連續輸入一個整數 */   
    printf("請輸入一個字元c2:"); 
    scanf(" %c",&c2);/* 連續輸入一個字元,但%c之前空一格 */ 
    printf("v2=%d c2的ASCII碼=%d\n",v2,c2); /* 輸出v2值及c2的ASCII碼 */
   
    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=1234;
    float fo=12.3478f;
    
    printf("no=%d\n",no);
    printf("no=%3.6d\n",no);/* 輸出整數,且欄寬設定為3,精度設定為.6 */ 
    printf("no=%5.2d\n",no);/* 輸出整數,且欄寬設定為5,精度設定為.2 */
    printf("-----------------------------------\n");
    printf("fo=%f\n",fo); 
    printf("fo=%6.2f\n",fo);/* 輸出浮點數,且欄寬設定為6,精度設定為.2 */ 
    printf("fo=%7.5f\n",fo);/* 輸出浮點數,且欄寬設定為7,精度設定為.5*/ 
    
    system("pause");
    return 0;
}

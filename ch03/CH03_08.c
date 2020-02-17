#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fo=234.567;
    
    printf("fo=%f\n",fo);
    printf("fo=%.2f\n",fo);/* 精度設定為.2 */ 
    printf("fo=%.3f\n",fo);/* 精度設定為.3 */ 
    printf("fo=%.5f\n",fo);/* 精度設定值大於原本的小數位數 */ 
    
    system("pause");
    return 0;
}

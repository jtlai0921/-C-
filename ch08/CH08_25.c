#include <stdio.h>
#include <stdlib.h>

#define scanfint(x) scanf("%d", &x) /* 輸入整數的scanf巨集定義 */ 
#define scanffloat(x) scanf("%f", &x)/* 輸入實數的scanf巨集定義 */

int main()
{
    int x;
    float y;

    printf("請輸入整數x：");
    scanfint(x);/*呼叫巨集函數*/ 
    printf("請輸入實數y：");
    scanffloat(y);/*呼叫巨集函數*/ 
    printf("整數x = %d\n", x);
    printf("實數y = %.2f\n", y);
    
    system("pause");
    return 0;
}

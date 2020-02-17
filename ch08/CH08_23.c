#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) (a>b?a:b)   /* #define 指令定義巨集 MAX(a, b) */

int main()
{
    int x, y;    /* 定義整數變數 x, y*/
    printf("輸入第一個數值:");
    scanf("%d",&x);                      /* 取得變數 x 的值 */
    printf("輸入第二個數值:");
    scanf("%d",&y);                      /*取得變數 y 的值 */
    printf("兩數中的較大值是:%d\n",MAX(x, y));    /* MAX(x, y) 取出較大值 */
    
    system("pause");
    return 0;
}

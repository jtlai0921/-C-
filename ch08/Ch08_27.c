#include <stdio.h>
#include <stdlib.h>

#define Use_MACRO 1         /*#define 指令定義識別字 Use_MACRO*/

#if Use_MACRO == 1      /*條件成立，則允許編譯區塊內的程式敘述*/
 #define MAX(a, b) (a>b?a:b)      /*#define 指令定義巨集 MAX(a, b)*/
#endif

int main()
{
 int x, y;            /* 定義整數變數 x、y */
 
 printf("請輸入兩數值進行大小比較:");
 scanf("%d%d",&x,&y);     /*整數變數 x 與 y 儲存輸入值*/
 printf(" %d與%d中的較大值是%d \n",x,y, MAX(x, y));   /*顯示結果訊息*/
 
 system("pause");
 return 0; 
 }

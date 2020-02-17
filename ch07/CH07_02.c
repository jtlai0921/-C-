#include <stdio.h>
#include <stdlib.h>

int main()
{
 int Num[5]={ 33, 44, 55, 66, 77 };  /* 定義整數陣列 Num[5] */
 int i;            
 
  for( i=0; i< 5; i++)
   {
   printf("Num[%d] 的元素值:%d",i, Num[i]);  /* 輸出陣列元素的值 */
   printf("        ");      /* 輸出空白行調整位置 */
   printf("Num[%d] 的位址:%p",i,&Num[i]);  /* %p 顯示 16 進位值 */
   printf("\n");                                      
   /* 換行 */
   }
 
  system("pause");
  return 0;
}

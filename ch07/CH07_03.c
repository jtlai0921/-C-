#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Num[3][3]={ {1, 2, 3},{4, 5,6},{7,8,9} }; 
     int i, j;             /* 定義整數變數 i 與 j */
     
     for ( i=0; i < 3; i++)   /* 巢狀 for 迴圈 */
      for ( j=0; j < 3; j++)
      {
          printf("Num[%d][%d] 的值:%d", i, j, Num[i][j]);   /* 輸出陣列元素的值 */
          printf("        ");     /* 輸出空白行調整位置 */
          printf("Num[%d][%d] 的位址:%p", i, j, &Num[i][j]);  
          printf("\n");             /* 換行 */
       }
       
       system("pause");
       return 0;
 }

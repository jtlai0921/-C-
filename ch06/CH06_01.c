#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Score[5]={ 87,66,90,65,70 };    
      /* 定義整數陣列 Score[5],並設定5筆成績 */
     int i=0;
     float Total=0;
     
     for (i=0;i< 5; i++)   /* 執行 for 迴圈輸出學生成績 */
     {
       printf("第 %d 位學生的分數:%d\n",i+1,Score[i]);  
       Total+=Score[i];  /* 計算總成績 */
      }
      printf("----------------------------------\n");
      printf("總分:%.1f  平均:%.1f\n", Total,Total/5);  
     /* 輸出成績總分及平均 */
     
     system("pause");
     return 0;
}

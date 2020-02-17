/*條件運算子練習*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int math,physical;      /*宣告表示兩科目分數的整數變數*/
 char chr_pass;                /*宣告表示合格的字元變數*/
  
  printf("請輸入數學與物理成績:"); 
  scanf("%d%d",&math,&physical);
  printf("數學 = %d 分與 物理 = %d \n",math,physical);
  
  chr_pass = ( math >= 60 && physical >= 60 )?'Y':'N';
  /*印出chr_pass變數內容，顯示該考生是否合格*/
  printf( "該名考生是否合格？ %c\n", chr_pass );  
   
   system("pause");
   return 0;
  }

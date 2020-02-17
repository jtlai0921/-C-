#include <stdio.h>
#include <stdlib.h> 

int main()
{
      int no=25;
      float price=15.5;
      char food[]="三明治";
      
      printf("今天是星期天,天氣晴朗.\n"); 
      printf("一個%s要%f元,建民買了%d個,一共花了%f元\n",
      food,price,no,no*price); 
      /* 格式化字元與引數列中各個項目的對應 */
      system("pause");
      return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
      char *number="President";
      /* 以字串指標宣告 */ 
      number++;/* 字串指標的加1運算 */     
      printf("%c\n",*(number+0));/*取出第一個字元*/ 
      printf("%s\n",number);/*執行加1運算後的字串*/ 
      
      system("pause");
      return 0;
 }

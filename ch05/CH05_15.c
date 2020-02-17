#include <stdio.h>
#include <stdlib.h>

int main()
{    
      while ( !kbhit() ) /* 使用 kbhit() 函數等待使用者按鍵 */    
       printf("輸入任一鍵結束程式的執行\n");       
             
      system("pause");    
      return 0;
 }



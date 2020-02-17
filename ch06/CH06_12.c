#include <stdio.h>
#include <stdlib.h>

int main()
{
   char Str[6][15]={"pineapple",  
 					"banana",    
 					"watermelon",
 					"pear",
  					"orange",
  			        "papaya"	};/* 字串陣列的宣告 */ 
   int i,j;
   
   for(i=0;i<6;i++)	
      printf("Str[%d]=%s\n",i,Str[i]);    
      /* 印出字串陣列所有元素的內容 */  
   printf("\n");
   printf("Str[%d][%d]=%c\n",1,0,Str[1][0]);
   /* 輸出第二個字串中的第一個字元 */
   system("pause");
   return 0;
}


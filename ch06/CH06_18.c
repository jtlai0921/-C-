#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char Word[40];/* 宣告字元陣列 */ 
   int i,j=0;
   
   printf("請輸入字串:"); 
   gets(Word);
   
   for(i=strlen(Word)-1;i>=0;i--)/*使用strlen(函數*/	
     printf("%c",Word[i]);/* 反向列印字串 */ 
      
   printf("\n");
   
   system("pause");
   return 0;
}


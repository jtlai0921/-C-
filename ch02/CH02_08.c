#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     char Str[]="World!";  
     printf("字串Str的內容: %s\n", Str);  /* 顯示 Str的內容 */
     printf("------------------------------\n");
     printf("%c\n",Str[0]); /* 輸出字串的第一個字元 */ 
     printf("%c\n",Str[1]);/* 輸出字串的第二個字元 */ 
     printf("%c\n",Str[2]);/* 輸出字串的第三個字元 */ 
     printf("%c\n",Str[3]);/* 輸出字串的第四個字元 */ 
     printf("%c\n",Str[4]);/* 輸出字串的第五個字元 */ 
     printf("%c\n",Str[5]);/* 輸出字串的第六個字元 */ 
     printf("%c\n",Str[6]);/* 輸出字串的第七個字元 */ 
     
     system("pause");
     return 0;
}

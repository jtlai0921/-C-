#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     char ch1='a';/* 宣告ch1為字元變數 */ 
     char ch2[]="a";/* 宣告ch2為字串變數 */ 
     
     printf("ch1=%c 有%d 位元\n",ch1,sizeof(ch1));
     /* 輸出ch1的值及所佔的位元數 */ 
     printf("ch2=%s 有%d 位元\n",ch2,sizeof(ch2));
     /* 輸出ch2的值及所佔的位元數 */ 
      
     system("pause");
     return 0;
}

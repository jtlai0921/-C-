#include <stdio.h>
#include <stdlib.h>

typedef int INTEGER;/* 把int定義成INTEGER */ 
typedef char* STRING;/* 把char*定義成STRING */ 

int main()
{    
     INTEGER amount;/* 宣告amount是 INTEGER型態 */ 
     STRING s1="生日快樂";/* 宣告s1是STRING型態 */ 
     amount=9999;
     printf("%s %d\n",s1,amount);
     
     system("pause");
     return 0;
}

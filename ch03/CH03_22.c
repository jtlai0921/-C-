#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1;/* 宣告一個字元變數 */ 
    
    c1=getchar();
    printf("剛剛輸入的字元是:");
    putchar(c1);
    putchar('\n');/* 利用putchar()來達到跳脫序列的功能 */ 
    
     
    system("pause");
    return 0; 
}

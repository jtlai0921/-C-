#include <stdio.h>
#include <stdlib.h>
#define NEWLINE putchar('\n') /* 定義巨集指令 */ 
#define DIVIDE printf("********\n") /* 定義巨集指令 */ 

int main()
 {
     
     printf("標題文字\n");
     DIVIDE;
     #undef DIVIDE /* 解除巨集 */ 
     NEWLINE;
    
    system("pause");
    return 0;
}

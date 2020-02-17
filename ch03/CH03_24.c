#include <stdio.h>
#include <stdlib.h>

int main()
{    
    char sentence[20];/* 宣告字元陣列 */
    
    printf("請輸入一個英文句子:");
    gets(sentence);
    puts("----------------------------------");/* 輸出完後會自動換行 */ 
    puts(sentence);
    
    system("pause");    
    return 0; 
}

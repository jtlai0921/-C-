#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,no1;
    
    
    scanf("no:%d",&no);/* 加上提示字元,輸入一個整數值 */ 
       
    printf("no1:");/* 使用printf()函數加上提示字元 */ 
    scanf("%d",&no1);
    
    printf("no=%d\n",no); 
    printf("no1=%d\n",no1); 
    
    
    system("pause");
    return 0;
}

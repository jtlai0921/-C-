#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]="Applepine";
    
    printf("name=%s\n",name);
    printf("name=%.2s\n",name);/* 精度設定為.2 */ 
    printf("name=%.5s\n",name);/* 精度設定為.5 */ 
    printf("name=%.10s\n",name);/* 精度設定值大於原本的字元數 */ 
    
    system("pause");
    return 0;
}

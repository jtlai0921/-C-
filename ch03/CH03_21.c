#include <stdio.h>
#include <stdlib.h>
int main()
{
    char area[4],tel[9];
        
    printf("請輸入電話號碼(含區碼)共十碼:");
    scanf("%3s%7s",area,tel);
    /* 以三位數與七位數來輸入整數*/ 
    
    printf("您的電話區碼為:%s\n",area);
    printf("您的電話號碼為:%s\n",tel);    
    /* 列印出電話區碼與電話號碼 */ 
    system("pause");
    return 0;
}

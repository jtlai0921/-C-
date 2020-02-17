#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=1234;
    
    printf("no=%*d\n",1,no);
    printf("no=%*d\n",6,no);/* 欄寬設定為6 */ 
    printf("no=%*d\n",8,no);/* 欄寬設定為8 */ 
    printf("no=%*d\n",2,no);/* 欄寬設定值小於原本的顯示字元數 */ 
    
    system("pause");
    return 0;
}

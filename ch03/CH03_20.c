#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10],name1[10],name2[10];
    
    printf("請輸入一個字串:");
    scanf("%s",name);/* 輸入一個字串,name之前不用加&號 */ 
    printf("%s\n",name);
    
    printf("請再輸入兩個字串:");
    scanf("%s%s",name1,name2);/* 輸入兩個字串,以空白鍵來區隔*/ 
    printf("%s  %s\n",name1,name2);
    
    system("pause");
    return 0;
}

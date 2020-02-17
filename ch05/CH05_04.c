#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Select, Result=77;  /* 定義整數變數 Select, Result */
    /*Result 儲存答案*/ 
    printf("猜猜今晚樂透號碼(2位數):\n");
    scanf("%d",&Select);
    
    if (Select-Result)  /*if多行條件敘述*/
    {
     printf("猜錯了....\n");
     printf("答案是%d\n",Result); 
    }
     
     system("pause");
     return 0;
}

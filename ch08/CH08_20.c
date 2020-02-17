#include <stdio.h>  
#include <stdlib.h> 
 
void Add_Num();    /* 建立累加變數值的函數宣告  */

int main() 
{  
    int count;  
     for (count=0; count<5; count++)  
     Add_Num();	/* 透過for迴圈執行函數呼叫5次 */ 
     
     system("pause");
     return 0;
}  

void Add_Num() 
{  
     auto int auto_Num=1;	/* 宣告並初始化自動變數 */
     static int static_Num=1;	/* 宣告並初始化靜態變數 */
     printf("自動變數 auto_Num 的值為：%d\n",auto_Num);  
     printf("靜態變數 static_Num 的值為：%d\n",static_Num);  
     	
     auto_Num++;	   /* 將auto變數加 1 */ 
     static_Num++;  /* 將static變數加 1 */ 
}

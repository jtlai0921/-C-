#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Num_1=1234;    /* 定義整數變數 Num_1 */
     float Num_2=123.45;  /* 定義浮點數變數 Num_2 */
     
     printf("顯示Num_1(%%d)  :%d\n", Num_1);  
     printf("顯示Num_1(%%6d) :%6d\n", Num_1); 
       /* 輸出整數,且欄寬設定為6 */   
     printf("顯示Num_1(%%+6d):%+6d\n", Num_1);  
      /* 輸出整數,且欄寬設定為6,旗標設定為+ */  
     printf("顯示Num_1(%%-6d):%-6d\n", Num_1);  
      /* 輸出整數,且欄寬設定為6,旗標設定為- */    
     printf("-----------------------------------\n");
     printf("顯示Num_2(%%f)    :%f\n", Num_2);     
     printf("顯示Num_2(%%6.2f) :%6.2f\n", Num_2);   
     /* 輸出浮點數,且欄寬設定為6,精度設定為.2 */     
     printf("顯示Num_2(%%+6.2f):%+6.2f\n", Num_2); 
      /* 輸出浮點數,且欄寬設定為6,精度設定為.2,旗標設定為+ */   
     printf("顯示Num_2(%%-6.2f):%-6.2f\n", Num_2);    
       /* 輸出浮點數,且欄寬設定為6,精度設定為.2,旗標設定為- */ 
     
     system("pause");
     return 0;
}

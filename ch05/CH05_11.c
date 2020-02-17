#include<stdio.h>/* 雙層巢狀迴圈的範例 */ 
#include<stdlib.h>

int main()
 {
   int i,j,n,m;  /*九九乘法表的雙重迴圈*/
   
   for(i=1; i<=9; i++)	 /* 外層迴圈 */ 
   {    
     for(j=1; j<=9; j++)  /* 內層迴圈 */ 
      {   
       printf("%d*%d=",i,j);
       printf("%d\t ",i*j);    
      }
       printf("\n");
     }
     
       system("pause");  
       return 0;
   }

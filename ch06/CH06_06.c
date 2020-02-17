#include <stdio.h>
#include <stdlib.h>

int main()
{

   int arr[5];
   int i,total; 
   
   for(i=0;i<5;i++)
   {
      printf("請輸入整數:");
      scanf("%d",&arr[i]);/* 由鍵盤輸入陣列元素值 */ 
      total+=arr[i];/* 每個元素值累加 */ 
   }
   printf("====================================\n");
   printf("平均值為 %.2f\n",(float)total/5);/* 求取平均值 */ 
  
   system("pause");
   return 0; 
  }

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int value;
    
    printf("請任意輸入一個整數：");
    scanf("%d", &value);/* 輸入一個整數 */ 

  if(value%2==0 || value%3==0)/* 判斷是否為2或3的倍數 */ 
   if(value%6!=0)
   printf("符合所要的條件\n");
   else
   printf("不符合所要的條件\n");/* 為6的倍數 */  
  else
   printf("不符合所要的條件\n");  

   system("pause");
   return 0;
}

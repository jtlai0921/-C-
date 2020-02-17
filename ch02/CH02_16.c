#include<stdio.h>
#include<stdlib.h>

int main()
{
  const int salary=25000;/* 宣告salary為常數 */ 
  
  printf("salary=%d\n",salary);
  {
   const int salary=17500;/* 在此程式區塊中宣告salary為常數 */ 
   printf("salary=%d\n",salary);
  }
  
  printf("salary=%d\n",salary);
    
   system("pause");
   return 0;
}


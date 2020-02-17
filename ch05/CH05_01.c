#include<stdio.h>
#include<stdlib.h>

int main()
{
   
  int Chi,Eng,Math;
  float Total,Average;
  
  printf("請輸入國文 英文 數學成績:");
  scanf("%d%d%d",&Chi,&Eng,&Math);
  
  Total=Chi+Eng+Math;/*計算兩者成績總和*/
  Average=Total/3; /*計算兩者平均成績*/
  printf("======================================\n");
  printf("成績總分=%.2f 平均成績=%.2f\n",Total,Average);
  
  system("pause");
  return 0;
} 

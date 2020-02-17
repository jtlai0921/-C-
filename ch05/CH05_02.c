#include<stdio.h>
#include<stdlib.h>
 
int main()
  {
    
    int x,y,h;/*宣告變數*/
    float ans;/*梯形的面積*/
    
    printf("請輸入梯形的長、寬、高：");
    scanf("%d%d%d",&x,&y,&h);/*運算式*/
    ans=(float)(x+y)*h/2;/* 梯形面積公式 */ 
    printf("梯形面積=%.2f\n",ans);
    
    system("pause");
    return 0;
  
   } 

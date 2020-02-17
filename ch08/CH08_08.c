#include <stdio.h>
#include <stdlib.h>

void transfer(float*,float*);/* 傳址呼叫原型宣告 */ 

int main()
{  
    float foot,inch;
    printf("請輸入多少英尺及英吋：");
    scanf("%f %f", &foot,&inch);
    printf("%.0f英呎 %.0f英吋=  ",foot,inch); 
    transfer(&foot,&inch);/* 傳址呼叫 */ 
    printf("%.0f公尺 %.2f公分\n",foot,inch); 
    
    system("pause");
    return 0;
 }
 
 void transfer(float *x,float *y)/*未傳回值*/ 
 {  
  float result;
  
  result=(*x*12+*y)*2.54;
  *x=(int)result/100;/* 計算公尺數 */ 
  *y=result-*x*100;/* 計算公分數 */ 
 
 }

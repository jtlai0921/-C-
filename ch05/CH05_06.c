#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cost=0;	      /*宣告整數變數*/
     printf("請輸入消費總金額:");
     scanf("%f", &cost);      
    if(cost>=100000)	    
      cost=cost*0.85;/* 10萬元以上打85折 */        
    else if(cost>=50000)        
      cost=cost*0.9; /* 5萬元到10萬元之間打9折 */      
    else 
      cost=cost*0.95;/* 5萬元以下打95折 */ 
      printf("實際消費總額:%.1f元\n",cost);  
    
    system("pause");
    return 0;
}

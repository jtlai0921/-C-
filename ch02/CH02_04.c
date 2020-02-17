#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float f1=1.1e-25;
      
    if (f1==1.1e-25)  
      printf("ㄢ单\n");/* 瞶阶琌单,纗计礚猭陪ボ单 */      
       
    if(fabs(f1-1.1e-25)<1e-30)
      printf("ㄢ碭单\n");/* ノ稬畉,ㄓ单 */ 
    
    system("pause");
    return 0;
}

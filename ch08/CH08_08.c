#include <stdio.h>
#include <stdlib.h>

void transfer(float*,float*);/* �ǧ}�I�s�쫬�ŧi */ 

int main()
{  
    float foot,inch;
    printf("�п�J�h�֭^�ؤέ^�T�G");
    scanf("%f %f", &foot,&inch);
    printf("%.0f�^�` %.0f�^�T=  ",foot,inch); 
    transfer(&foot,&inch);/* �ǧ}�I�s */ 
    printf("%.0f���� %.2f����\n",foot,inch); 
    
    system("pause");
    return 0;
 }
 
 void transfer(float *x,float *y)/*���Ǧ^��*/ 
 {  
  float result;
  
  result=(*x*12+*y)*2.54;
  *x=(int)result/100;/* �p�⤽�ؼ� */ 
  *y=result-*x*100;/* �p�⤽���� */ 
 
 }

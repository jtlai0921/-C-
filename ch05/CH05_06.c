#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cost=0;	      /*�ŧi����ܼ�*/
     printf("�п�J���O�`���B:");
     scanf("%f", &cost);      
    if(cost>=100000)	    
      cost=cost*0.85;/* 10�U���H�W��85�� */        
    else if(cost>=50000)        
      cost=cost*0.9; /* 5�U����10�U��������9�� */      
    else 
      cost=cost*0.95;/* 5�U���H�U��95�� */ 
      printf("��ڮ��O�`�B:%.1f��\n",cost);  
    
    system("pause");
    return 0;
}

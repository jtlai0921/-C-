#include<stdio.h>/* ���h�_���j�骺�d�� */ 
#include<stdlib.h>

int main()
 {
   int i,j,n,m;  /*�E�E���k�������j��*/
   
   for(i=1; i<=9; i++)	 /* �~�h�j�� */ 
   {    
     for(j=1; j<=9; j++)  /* ���h�j�� */ 
      {   
       printf("%d*%d=",i,j);
       printf("%d\t ",i*j);    
      }
       printf("\n");
     }
     
       system("pause");  
       return 0;
   }

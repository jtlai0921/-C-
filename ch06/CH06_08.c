#include <stdio.h>
#include <stdlib.h>

int main()
{    
   int i,j,sum,max=0,no=1;
   int sale[][6]={{112,76,95,120,98,68},
                   {90,120,88,112,108,120},
                   {108,99,126,90,76,98}};/* �ٲ��Ĥ@�������ޭȤ��� */ 
   
   printf("***** �Ʀ��T���q�~�Ȳέp�� *****\n"); 
   printf("-----------------------------------\n");
   for(i=0;i<3;i++)
   {
      sum=0;
      for(j=0;j<6;j++)
       sum+=sale[i][j];/* �p��C�ӷ~�ȭ��b�~���~�Z���B */ 
      printf("�P���%d���e�b�~�P���`���B�� %d\n",i+1,sum); 
      printf("-----------------------------------\n");  
   }
   printf("\n\n");
     for(i=0;i<6;i++)
   {
      sum=0;
      for(j=0;j<3;j++)
       sum+=sale[j][i];/* �C��T�ӷ~�ȭ����~�Z���B */ 
      printf("�T�ӷ~�ȭ�%d�몺�P���`���B�� %d\n",i+1,sum); 
      printf("===================================\n");  
   }  
   
   system("pause");
   return 0;
}



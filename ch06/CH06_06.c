#include <stdio.h>
#include <stdlib.h>

int main()
{

   int arr[5];
   int i,total; 
   
   for(i=0;i<5;i++)
   {
      printf("�п�J���:");
      scanf("%d",&arr[i]);/* ����L��J�}�C������ */ 
      total+=arr[i];/* �C�Ӥ����Ȳ֥[ */ 
   }
   printf("====================================\n");
   printf("�����Ȭ� %.2f\n",(float)total/5);/* �D�������� */ 
  
   system("pause");
   return 0; 
  }

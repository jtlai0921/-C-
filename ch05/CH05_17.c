#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int input = 0;     
	 char replay=0;     
	 
     do{        
	   puts("��J��ƭȡG");
	   scanf("%d",&input);  /* ��J��� */      
	   printf("��J���ƬO�_���_�ơH");
       printf("%c\n",((input % 2) ? 'Y': 'N'));
	   /* �Q�α���B��l�ӧP�_ */ 
       printf("�~��(1:�~�� 0:����)�H");
	   
       replay=getche();/* ��J�r�� */ 
       printf("\n");
          
	  } while(replay!='0');   /* do while�j�� */     
	
	system("pause");
	return 0;	
}

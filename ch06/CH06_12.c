#include <stdio.h>
#include <stdlib.h>

int main()
{
   char Str[6][15]={"pineapple",  
 					"banana",    
 					"watermelon",
 					"pear",
  					"orange",
  			        "papaya"	};/* �r��}�C���ŧi */ 
   int i,j;
   
   for(i=0;i<6;i++)	
      printf("Str[%d]=%s\n",i,Str[i]);    
      /* �L�X�r��}�C�Ҧ����������e */  
   printf("\n");
   printf("Str[%d][%d]=%c\n",1,0,Str[1][0]);
   /* ��X�ĤG�Ӧr�ꤤ���Ĥ@�Ӧr�� */
   system("pause");
   return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    
      char *number="President";
      /* �H�r����Ыŧi */ 
      number++;/* �r����Ъ��[1�B�� */     
      printf("%c\n",*(number+0));/*���X�Ĥ@�Ӧr��*/ 
      printf("%s\n",number);/*����[1�B��᪺�r��*/ 
      
      system("pause");
      return 0;
 }

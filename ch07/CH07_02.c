#include <stdio.h>
#include <stdlib.h>

int main()
{
 int Num[5]={ 33, 44, 55, 66, 77 };  /* �w�q��ư}�C Num[5] */
 int i;            
 
  for( i=0; i< 5; i++)
   {
   printf("Num[%d] ��������:%d",i, Num[i]);  /* ��X�}�C�������� */
   printf("        ");      /* ��X�ťզ�վ��m */
   printf("Num[%d] ����}:%p",i,&Num[i]);  /* %p ��� 16 �i��� */
   printf("\n");                                      
   /* ���� */
   }
 
  system("pause");
  return 0;
}

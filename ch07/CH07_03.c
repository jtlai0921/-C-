#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Num[3][3]={ {1, 2, 3},{4, 5,6},{7,8,9} }; 
     int i, j;             /* �w�q����ܼ� i �P j */
     
     for ( i=0; i < 3; i++)   /* �_�� for �j�� */
      for ( j=0; j < 3; j++)
      {
          printf("Num[%d][%d] ����:%d", i, j, Num[i][j]);   /* ��X�}�C�������� */
          printf("        ");     /* ��X�ťզ�վ��m */
          printf("Num[%d][%d] ����}:%p", i, j, &Num[i][j]);  
          printf("\n");             /* ���� */
       }
       
       system("pause");
       return 0;
 }

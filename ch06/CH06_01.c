#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Score[5]={ 87,66,90,65,70 };    
      /* �w�q��ư}�C Score[5],�ó]�w5�����Z */
     int i=0;
     float Total=0;
     
     for (i=0;i< 5; i++)   /* ���� for �j���X�ǥͦ��Z */
     {
       printf("�� %d ��ǥͪ�����:%d\n",i+1,Score[i]);  
       Total+=Score[i];  /* �p���`���Z */
      }
      printf("----------------------------------\n");
      printf("�`��:%.1f  ����:%.1f\n", Total,Total/5);  
     /* ��X���Z�`���Υ��� */
     
     system("pause");
     return 0;
}

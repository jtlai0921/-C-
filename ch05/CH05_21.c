#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*�w�q�@�Ӿ�ư}�C�A�s��ǥͦ��Z*/ 
     int count,Student_Score[10]={ 58, 61, 77, 89, 38, 67, 92, 44, 47, 66};
     
     for (count=0; count < 10; count++)   /*for �j��*/
     {
     if(Student_Score[count] >= 60)    /*�P�_���Z�O�_�ή�*/
      continue;        /*continue ���O*/
     printf("%d���ǥͤ��Ƥ��ή�  ����:%d\n",count+1,Student_Score[count]);
     
 }
 
    system("pause");
    return 0;
 }

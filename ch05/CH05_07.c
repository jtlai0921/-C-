/*����B��l�m��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int math,physical;      /*�ŧi��ܨ��ؤ��ƪ�����ܼ�*/
 char chr_pass;                /*�ŧi��ܦX�檺�r���ܼ�*/
  
  printf("�п�J�ƾǻP���z���Z:"); 
  scanf("%d%d",&math,&physical);
  printf("�ƾ� = %d ���P ���z = %d \n",math,physical);
  
  chr_pass = ( math >= 60 && physical >= 60 )?'Y':'N';
  /*�L�Xchr_pass�ܼƤ��e�A��ܸӦҥͬO�_�X��*/
  printf( "�ӦW�ҥͬO�_�X��H %c\n", chr_pass );  
   
   system("pause");
   return 0;
  }

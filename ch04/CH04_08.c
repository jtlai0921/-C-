#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  int a=3,b=5,c=7;      /*�ŧia�Bb��c�T�Ӿ���ܼ�*/
  
  printf("a= %d b= %d c= %d\n",a,b,c);
  printf("====================================\n");

  printf("a<b && b<c||c<a = %d\n",a<b&&b<c||c<a);
  printf("!(a==b)&&(!a<b) = %d\n",!(a==b)&&(!a<b));
   /* �]�t���Y�P�޿�B��l���B�⦡�D�� */   
   
  system("pause");
  return 0;

} 


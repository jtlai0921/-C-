#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;       /* �w�q����ܼ� i */
  float f=123.456F; /* �w�q���ׯB�I���ܼ� f*/
  double d;
  char c='a';
  short sum;
  i=100+c; /* c��ASCII�X��97 */ 
  printf("i=%d\n",i);
  d=i+f; 
  /* �N���i�P���ׯB�I��f�[�k�B���A�s�J����ׯB�I��d*/
  printf("d=%f\n",d);
  printf("d�Ҧ����줸�լ�%d�줸��\n",sizeof(d)); 
  sum=d;
  printf("sum=%d\n",sum);
  printf("sum�Ҧ����줸�լ�%d�줸��\n",sizeof(sum));
  
  system("pause");
  
}
  
  
    
    
    
    
    


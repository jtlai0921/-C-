#include <stdio.h>
#include <stdlib.h>

int main()
{

    int bArray[5];    /* �w�q��ư}�C bArray */
    float cArray[7];  /* �w�q�B�I�ư}�C cArray */
       
    printf("bArray�}�C��:%d �줸��,�@��%d�Ӥ���\n",
    sizeof(bArray),sizeof(bArray)/sizeof(int));
    /* ��� bArray ���Ϊ��O����Ŷ��P�����Ӽ� */
    printf("cArray�}�C��:%d �줸��,�@��%d�Ӥ���\n",
    sizeof(cArray),sizeof(cArray)/sizeof(float));
    /* ��� cArray ���Ϊ��O����Ŷ� �P�����Ӽ�*/
   
   system("pause");
   return 0; 
  }

#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     char ch1='a';/* �ŧich1���r���ܼ� */ 
     char ch2[]="a";/* �ŧich2���r���ܼ� */ 
     
     printf("ch1=%c ��%d �줸\n",ch1,sizeof(ch1));
     /* ��Xch1���ȤΩҦ����줸�� */ 
     printf("ch2=%s ��%d �줸\n",ch2,sizeof(ch2));
     /* ��Xch2���ȤΩҦ����줸�� */ 
      
     system("pause");
     return 0;
}

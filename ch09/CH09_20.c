#include <stdio.h>
#include <stdlib.h>

 struct product
 {
     int id;
     int price; 
     float weight;
 }; /* �ŧi���c���A */ 
 
union product_U
 {
     int id;
     int price; 
     float weight;
 }; /* �ŧi�p�X���A */

 int main(void)
 {
     struct product obj1;/* ���c�ܼ� */ 
     union product_U obj2; /* �p�X�ܼ� */    
     printf("���c�ܼƦ���=%d �줸��\n",sizeof(obj1));
     printf("�p�X�ܼƦ���=%d �줸��\n",sizeof(obj2));
     
     system("pause");
     return 0;
 }

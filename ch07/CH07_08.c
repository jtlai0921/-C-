#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int *int_ptr,no;    /* �ŧi��ƫ��A���� */
     int_ptr=&no;/* ��l�ƫ��� */ 
     
     printf("�̪쪺int_ptr��}:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr++;
     printf("int_ptr++���}:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr--;
     printf("int_ptr--���}:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr=int_ptr+2;
     printf("int_ptr+2���}:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr=int_ptr-2;
     printf("int_ptr-2���}:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     
     system("pause");
     return 0;
}

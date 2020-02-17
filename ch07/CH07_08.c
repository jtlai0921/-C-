#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int *int_ptr,no;    /* 宣告整數型態指標 */
     int_ptr=&no;/* 初始化指標 */ 
     
     printf("最初的int_ptr位址:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr++;
     printf("int_ptr++後位址:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr--;
     printf("int_ptr--後位址:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr=int_ptr+2;
     printf("int_ptr+2後位址:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     int_ptr=int_ptr-2;
     printf("int_ptr-2後位址:\n"); 
     printf( "int_ptr = %p\n", int_ptr);
     
     system("pause");
     return 0;
}

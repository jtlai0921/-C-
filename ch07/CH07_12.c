#include <stdio.h>
#include <stdlib.h>

int main()
{
    
     int i,arr[7]={312,16,35,65,152,231,88};
     int *ptr;
 
     ptr = arr;/* 使用指標變數指向陣列常數 */ 
     
     for ( i = 0; i < 7; i++ )
      {
           printf( "arr[%d]=%d\t", i,arr[i]);
           printf( "arr+%d=%p\t", i,arr+i);/* 輸出arr+i的值 */ 
           printf( "*(ptr+%d)=%d\t", i,*(ptr+i));
           printf( "ptr+%d=%p\n", i,ptr);/* 輸出ptr+i的值 */ 
      }

      system("pause");
      return 0;
 }

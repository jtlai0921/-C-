#include <stdio.h>
#include <stdlib.h>

int main()
{
    
     int i,arr[7]={312,16,35,65,152,231,88};
     int *ptr;
 
     ptr = arr;/* �ϥΫ����ܼƫ��V�}�C�`�� */ 
     
     for ( i = 0; i < 7; i++ )
      {
           printf( "arr[%d]=%d\t", i,arr[i]);
           printf( "arr+%d=%p\t", i,arr+i);/* ��Xarr+i���� */ 
           printf( "*(ptr+%d)=%d\t", i,*(ptr+i));
           printf( "ptr+%d=%p\n", i,ptr);/* ��Xptr+i���� */ 
      }

      system("pause");
      return 0;
 }

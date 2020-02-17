#include <stdio.h>
#include <stdlib.h>

int main()
{
    
     int i,j,arr[2][3]={12,16,35,65,152,23};
     int *ptr;
 
     ptr = &arr[0][0];/* 使用指標變數指向陣列起始位址 */ 
     
     for ( i = 0; i < 2; i++ )
      for ( j= 0; j < 3; j++ )
      {
           printf("arr[%d][%d]=%d\n",i,j,*(ptr+i*3+j)); 
           /*以指標變數來間接求取陣列元素值 */ 
      }

      system("pause");
      return 0;
 }

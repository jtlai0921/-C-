#include <stdio.h>
#include <stdlib.h>

int main()
{
    
     int i,j,arr[2][3]={12,16,35,65,152,23};
     int *ptr;
 
     ptr = &arr[0][0];/* �ϥΫ����ܼƫ��V�}�C�_�l��} */ 
     
     for ( i = 0; i < 2; i++ )
      for ( j= 0; j < 3; j++ )
      {
           printf("arr[%d][%d]=%d\n",i,j,*(ptr+i*3+j)); 
           /*�H�����ܼƨӶ����D���}�C������ */ 
      }

      system("pause");
      return 0;
 }

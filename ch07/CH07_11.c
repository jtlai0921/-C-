#include <stdio.h>
#include <stdlib.h>

int main()
{
    
     int i,j,no[2][4]={312,16,35,65,52,111,77,80};
     
     for (i = 0; i < 2; i++ )
      for ( j = 0; j < 4; j++ )
         {
           printf( "&no[%d][%d]=%p\t *(no+%d)+%d=%p\n",
          i,j,&no[i][j],i,j,*(no+i)+j);
          /* ��X�G���}�C��������}�P�Q�Ϋ��Ъ��ܰ}�C������}*/ 
          printf( "*(*(no+%d)+%d) = %d\n", i, j, *(*(no+i)+j) );
          /*�C�Larr[i][j]������*/
          printf("===========================================\n");
          }
             
      system("pause");
      return 0;
 }
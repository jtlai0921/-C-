#include <stdio.h>
#include <stdlib.h>

int main()
{
   
 int arr[2][3][4]={ { {1,3,5,6},         /* �Ĥ@��3*4���G���}�C */
               {2,3,4,5},
		       {3,3,3,3}
                  },
	           { {2,3,3,54},        /* �ĤG��3*4���G���}�C */
	           {3,5,3,1},
	           {5 ,6,3,6}
               } };

   int i,j,k;
		
    for(i=0;i<2;i++)	   /* �~�h�j�� */
      for(j=0;j<3;j++)		/* ���h�j�� */
         for(k=0;k<4;k++)		/* ���h�j�� */
           printf("arr[%d][%d][%d]=%d\n",i,j,k,arr[i][j][k]);
           /* �C�X�T���}�C��������  */ 
            
   system("pause");
   return 0;
}


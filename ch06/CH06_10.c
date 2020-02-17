#include <stdio.h>
#include <stdlib.h>

int main()
{
   
 int arr[2][3][4]={ { {1,3,5,6},         /* 第一個3*4的二維陣列 */
               {2,3,4,5},
		       {3,3,3,3}
                  },
	           { {2,3,3,54},        /* 第二個3*4的二維陣列 */
	           {3,5,3,1},
	           {5 ,6,3,6}
               } };

   int i,j,k;
		
    for(i=0;i<2;i++)	   /* 外層迴圈 */
      for(j=0;j<3;j++)		/* 中層迴圈 */
         for(k=0;k<4;k++)		/* 內層迴圈 */
           printf("arr[%d][%d][%d]=%d\n",i,j,k,arr[i][j][k]);
           /* 列出三維陣列中的元素  */ 
            
   system("pause");
   return 0;
}


/* continue�m�� */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b;
    for(a; a<=9; a++)	/*�~�hfor�j�鱱��y�b��X*/
    {
      for(b=1; b<=a; b++)  	/*���hfor�j�鱱��x�b��X*/
      {	
        if(b == 6)
         continue;
    printf("%d ",b);	/*�L�Xb����*/   			
	   }		
    printf("\n");
 }
 
    system("pause");
    return 0;
 }



/* continue½m²ß */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b;
    for(a; a<=9; a++)	/*¥~¼hfor°j°é±±¨îy¶b¿é¥X*/
    {
      for(b=1; b<=a; b++)  	/*¤º¼hfor°j°é±±¨îx¶b¿é¥X*/
      {	
        if(b == 6)
         continue;
    printf("%d ",b);	/*¦L¥Xbªº­È*/   			
	   }		
    printf("\n");
 }
 
    system("pause");
    return 0;
 }



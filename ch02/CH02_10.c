#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     char c1='\a';/* �H����r���ӳ]�� */ 
     char c2=7;/* �H10�i��ӳ]�� */ 
     char c3='\7';/* �H8�i��ӳ]�� */ 
     char c4='\x7';/* �H16�i��ӳ]�� */ 
     
     
     char str[]="\x57\x4F\x52\x4c\x44\x21";/* �H16�i��ӳ]�wWORLD! �r�� */
     
     printf("%c%c%c%c%s\n",c1,c2,c3,c4,str); /* ��X�|�n���n�P�r��str */ 
        
     system("pause");
     return 0;
}

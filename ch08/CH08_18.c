#include <stdio.h>                 
#include <stdlib.h>

int main()                      
{
     auto int iVar=5;/* �w�q auto����ܼ� iVar */

	 printf("�i�J�{���϶��e��iVar=%d\n",iVar); 

	 /* ���U�H�j�A���Ϲj�X�@�q�{���϶� */
     {
		 auto int iVar=10;                          /* �{���϶����w�q����ܼ� iVar */
         printf("�{���϶����� iVar=%d\n",iVar);
	 }
     printf("���}�{���϶��� iVar=%d\n",iVar);
     
     system("pause");
     return 0;

}

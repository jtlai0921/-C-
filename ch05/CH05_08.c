#include <stdio.h>
#include <stdlib.h>		

int main()
{
	char select;
	puts("    (1) �ư��K��");
	puts("    (2) ���A�K��");
	puts("    (3) ���L�K��");
	puts("    (4) ���ƫK��");
	printf("    �п�J�z�n�ʶR���K��G");
	select=getche();/*��J�r���æs�J�ܼ�select*/
    printf("\n===================================\n");
    
	switch(select)
	{
	case '1':               /*�p�Gselect����1*/
		puts("�ư��K��@��75��");                
		break;                                        /*���Xswitch*/
	case '2':         /*�p�Gselect����2*/
		puts("���A�K��@��85��");                  
		break;        /*���Xswitch*/
	case '3':      /*�p�Gselect����3*/
		puts("���L�K��@��80��");               
		break;     /*���Xswitch*/
	case '4':      /*�p�Gselect����3*/
	    puts("���ƫK��@��60��");               
		break;   /*���Xswitch*/
	default:        /*�p�Gselect������1,2,3,4����@��*/
		printf("�ﶵ���~\n");                        
	}
    printf("===================================\n");
    
    system("pause");
    return 0;	
}

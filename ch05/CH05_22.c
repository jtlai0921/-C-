#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	
	printf("�п�J��妨�Z?");
	scanf("%d",&score);

	if ( score>=60 ) 
		goto pass;		  /*�����ҦW�٬�"pass"���{���ԭz�~�����{��.*/
	else
		goto nopass;	  /*�����ҦW�٬�"nopass"���{���ԭz�~�����{��.*/	

	pass:                         /*pass����*/
	printf("---------------------------------\n");
	printf("���ή�F!\n");       
	goto TheEnd;          /*�����ҦW�٬�"TheEnd"���{���ԭz�~�����{��*/

	nopass:               /*nopass����*/
	printf("---------------------------------\n");
	printf("��夣�ή��!\n");

	TheEnd:  
    printf("---------------------------------\n");
    printf("�{�����槹��!\n");  /*TheEnd����*/
	
	system("pause");
    return 0;
}




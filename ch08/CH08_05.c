#include <stdio.h>
#include <stdlib.h>

void swap_test(int,int);/*�ǭȩI�s���*/ 

int main()
{
	int a,b;
	a=10;
	b=20;/*�]�wa,b�����*/ 
	printf("��ƥ~�洫�e�Ga=%d, b=%d\n",a,b);
	swap_test(a,b);/*��ƩI�s */ 
	printf("��ƥ~�洫��Ga=%d, b=%d\n",a,b);
	
    system("PAUSE");
	return 0;
}

void swap_test(int x,int y)/* ���Ǧ^�� */ 
{
	int t;
	printf("��Ƥ��洫�e�Gx=%d, y=%d\n",x,y);
	t=x;
	x=y;
	y=t;/* �洫�L�{ */ 
	printf("��Ƥ��洫��Gx=%d, y=%d\n",x,y);
}	

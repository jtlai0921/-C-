#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a1=10;
	int *ptr1,**ptr2;
	
    ptr1=&a1;/* ptr���Va1����} */ 
	ptr2=&ptr1;/* ptr2���Vptr1����} */ 
	
    printf("�ܼ� a1 ����}:%p�A���e:%d\n",&a1,a1);
	printf("�ܼ� ptr1 ����}:%p�A���e:%p�A*ptr1�G%d\n",&ptr1,ptr1,*ptr1);
	printf("�ܼ� ptr2 ����}:%p�A���e:%p�A**ptr2�G%d\n",&ptr2,ptr2,**ptr2);
	
    system("PAUSE");
	return 0;
}

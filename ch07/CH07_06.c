#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a1=10;
	int *ptr1,**ptr2;
	
    ptr1=&a1;/* ptr指向a1的位址 */ 
	ptr2=&ptr1;/* ptr2指向ptr1的位址 */ 
	
    printf("變數 a1 之位址:%p，內容:%d\n",&a1,a1);
	printf("變數 ptr1 之位址:%p，內容:%p，*ptr1：%d\n",&ptr1,ptr1,*ptr1);
	printf("變數 ptr2 之位址:%p，內容:%p，**ptr2：%d\n",&ptr2,ptr2,**ptr2);
	
    system("PAUSE");
	return 0;
}

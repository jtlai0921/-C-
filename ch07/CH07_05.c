#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a1=40, a2=58, a3=71;
	int temp;
	int *p1,*p2,*p3;
	
	
	p1 = &a1;/* p1���Va1����} */ 
	p2 = &a2;/* p2���Va2����} */ 
	p3 = &a3;/* p3���Va3����} */ 

	printf("�ܼ� a1����:%d�A*p1����:%d\n",a1,*p1);
	printf("�ܼ� a2����:%d�A*p2����:%d\n",a2,*p2);
	printf("�ܼ� a3����:%d�A*p3����:%d\n",a3,*p3);
	
	a1=101; /*���s�]�wa1���� */ 
	*p2=103; /*���s�]�w*p2���� */ 
	p3=p2; /* �Np3���Vp2 */ 
	printf("------------------------------------\n");
	printf("�ܼ� a1����:%d�A*p1����:%d\n",a1,*p1);
	printf("�ܼ� a2����:%d�A*p2����:%d\n",a2,*p2);
	printf("�ܼ� a3����:%d�A*p3����:%d\n",a3,*p3);
    printf("------------------------------------\n");
    
	system("PAUSE");
	return 0;
}

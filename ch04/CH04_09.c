#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a=12,b=38;
	
	printf("%d&%d=%d\n",a,b,a&b);/* AND�B�� */ 
	printf("%d|%d=%d\n",a,b,a|b);/* OR�B�� */ 
	printf("%d^%d=%d\n",a,b,a^b);/* XOR�B�� */ 
	printf("~%d=%d\n",a,~a);/* NOT�B�� */ 
	
    system("pause");
    return 0;
} 

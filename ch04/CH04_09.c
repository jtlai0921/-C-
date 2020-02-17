#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a=12,b=38;
	
	printf("%d&%d=%d\n",a,b,a&b);/* AND運算 */ 
	printf("%d|%d=%d\n",a,b,a|b);/* OR運算 */ 
	printf("%d^%d=%d\n",a,b,a^b);/* XOR運算 */ 
	printf("~%d=%d\n",a,~a);/* NOT運算 */ 
	
    system("pause");
    return 0;
} 

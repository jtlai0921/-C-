#include <stdio.h>
#include <stdlib.h>

void func1();

int main()
{
	register int a=10;/*�ŧi�Ȧs���ܼ�*/ 
	printf("�Ȧs���ܼ� a=%d\n",a);
	func1();	
	
    system("PAUSE");	
	return 0;
}

void func1()
{
	register int b=20;/*��Ƥ��ŧi�Ȧs���ܼ�*/ 
	printf("�Ȧs���ܼ� b=%d\n",b);
		
}

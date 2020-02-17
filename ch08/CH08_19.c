#include <stdio.h>
#include <stdlib.h>

void func1();

int main()
{
	register int a=10;/*宣告暫存器變數*/ 
	printf("暫存器變數 a=%d\n",a);
	func1();	
	
    system("PAUSE");	
	return 0;
}

void func1()
{
	register int b=20;/*函數中宣告暫存器變數*/ 
	printf("暫存器變數 b=%d\n",b);
		
}

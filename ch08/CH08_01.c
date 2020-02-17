#include <stdio.h>
#include <stdlib.h>

int mymax(int,int); /*函數原型宣告*/

int main()
{ 		
	int a,b;
	printf("數字比大小\n請輸入a:");
	scanf("%d",&a);
	printf("請輸入b:");
	scanf("%d",&b);
	printf("較大者之值為:%d\n",mymax(a,b));/*函數呼叫*/
	system("PAUSE");
	return 0;
}

int mymax(int x,int y)
{ /*函數定義主體*/
	if(x>y)
		return x;
	else
		return y;
}	

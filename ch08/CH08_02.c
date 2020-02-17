#include <stdio.h>
#include <stdlib.h>

void mymax(int x,int y)
{ /*函數定義移到main()函數之前*/ 
	if(x>y)		
		printf("較大者之值為:%d\n",x);		
	else
		printf("較大者之值為:%d\n",y);		
}

int main()
{ 		
	int a,b;
	printf("數字比大小\n請輸入a:");
	scanf("%d",&a);
	printf("請輸入b:");
	
    scanf("%d",&b);
	mymax(a,b); /*函數呼叫*/
	
	system("PAUSE");
	return 0;
}
	

#include <stdio.h>
#include <stdlib.h>

void mymax(int x,int y)
{ /*��Ʃw�q����main()��Ƥ��e*/ 
	if(x>y)		
		printf("���j�̤��Ȭ�:%d\n",x);		
	else
		printf("���j�̤��Ȭ�:%d\n",y);		
}

int main()
{ 		
	int a,b;
	printf("�Ʀr��j�p\n�п�Ja:");
	scanf("%d",&a);
	printf("�п�Jb:");
	
    scanf("%d",&b);
	mymax(a,b); /*��ƩI�s*/
	
	system("PAUSE");
	return 0;
}
	

#include <stdio.h>
#include <stdlib.h>

int mymax(int,int); /*��ƭ쫬�ŧi*/

int main()
{ 		
	int a,b;
	printf("�Ʀr��j�p\n�п�Ja:");
	scanf("%d",&a);
	printf("�п�Jb:");
	scanf("%d",&b);
	printf("���j�̤��Ȭ�:%d\n",mymax(a,b));/*��ƩI�s*/
	system("PAUSE");
	return 0;
}

int mymax(int x,int y)
{ /*��Ʃw�q�D��*/
	if(x>y)
		return x;
	else
		return y;
}	

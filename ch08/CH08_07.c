#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_test(int *,int *);/*ㄧ计肚㊣ */ 

int main()
{
	int a,b;
	a=10;
	b=20;
	printf("ㄧ计ユ传玡a=%d, b=%d\n",a,b);
	swap_test(&a,&b);/* 肚㊣ */ 
	printf("ㄧ计ユ传a=%d, b=%d\n",a,b);
	
    system("PAUSE");
	return 0;
}

void swap_test(int *x,int *y)
{
	int t;
	printf("ㄧ计ずユ传玡x=%d, y=%d\n",*x,*y);
	t=*x;
	*x=*y;
	*y=t;/* ユ传筁祘 */ 
	printf("ㄧ计ずユ传x=%d, y=%d\n",*x,*y);

}	

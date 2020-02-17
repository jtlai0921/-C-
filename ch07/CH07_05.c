#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a1=40, a2=58, a3=71;
	int temp;
	int *p1,*p2,*p3;
	
	
	p1 = &a1;/* p1a1 */ 
	p2 = &a2;/* p2a2 */ 
	p3 = &a3;/* p3a3 */ 

	printf("跑计 a1:%d*p1:%d\n",a1,*p1);
	printf("跑计 a2:%d*p2:%d\n",a2,*p2);
	printf("跑计 a3:%d*p3:%d\n",a3,*p3);
	
	a1=101; /*穝砞﹚a1 */ 
	*p2=103; /*穝砞﹚*p2 */ 
	p3=p2; /* 盢p3p2 */ 
	printf("------------------------------------\n");
	printf("跑计 a1:%d*p1:%d\n",a1,*p1);
	printf("跑计 a2:%d*p2:%d\n",a2,*p2);
	printf("跑计 a3:%d*p3:%d\n",a3,*p3);
    printf("------------------------------------\n");
    
	system("PAUSE");
	return 0;
}

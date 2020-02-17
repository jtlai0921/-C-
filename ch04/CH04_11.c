#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	
    a=15;
    printf("a= %d \n",a);
	b=++a;/* 前置型遞增運算子*/
	printf("前置型遞增運算子:b=++a\n a=%d,b=%d\n",a,b);		
    a=15;
    printf("a= %d \n",a);
	b=a++; /* 後置型遞增運算子*/
	printf("後置型遞增運算子:b=a++\n a=%d,b=%d\n",a,b);  
    a=15;
    printf("a= %d \n",a);
	b=--a;/* 前置型遞減運算子*/
	printf("前置型遞減運算子:b=--a\n a=%d,b=%d\n",a,b);
    a=15;
    printf("a= %d \n",a);
	b=a--;/* 後置型遞減運算子*/
	printf("後置型遞減運算子:b=a-- \na=%d,b=%d\n",a,b);	
    system("pause");  
    return 0;
 }

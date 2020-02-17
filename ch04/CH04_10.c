#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a=12; /* a的二進位表示00001100 */ 
	
	
	printf("%d<<%d=%d\n",a,2,a<<2);/* 左移2位運算 */ 
	printf("%d>>%d=%d\n",a,2,a>>2);/* 右移2位運算 */ 
	
	a=-12;/* a的二進位表示11110100 */ 
    printf("%d<<%d=%d\n",a,2,a<<2);/* 左移2位運算 */ 
	printf("%d>>%d=%d\n",a,2,a>>2);/* 右移2位運算 */ 
    
    system("pause");
    return 0;
}




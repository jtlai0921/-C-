#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a=12; /* a���G�i����00001100 */ 
	
	
	printf("%d<<%d=%d\n",a,2,a<<2);/* ����2��B�� */ 
	printf("%d>>%d=%d\n",a,2,a>>2);/* �k��2��B�� */ 
	
	a=-12;/* a���G�i����11110100 */ 
    printf("%d<<%d=%d\n",a,2,a<<2);/* ����2��B�� */ 
	printf("%d>>%d=%d\n",a,2,a>>2);/* �k��2��B�� */ 
    
    system("pause");
    return 0;
}




#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	
    a=15;
    printf("a= %d \n",a);
	b=++a;/* �e�m�����W�B��l*/
	printf("�e�m�����W�B��l:b=++a\n a=%d,b=%d\n",a,b);		
    a=15;
    printf("a= %d \n",a);
	b=a++; /* ��m�����W�B��l*/
	printf("��m�����W�B��l:b=a++\n a=%d,b=%d\n",a,b);  
    a=15;
    printf("a= %d \n",a);
	b=--a;/* �e�m������B��l*/
	printf("�e�m������B��l:b=--a\n a=%d,b=%d\n",a,b);
    a=15;
    printf("a= %d \n",a);
	b=a--;/* ��m������B��l*/
	printf("��m������B��l:b=a-- \na=%d,b=%d\n",a,b);	
    system("pause");  
    return 0;
 }

#include <stdio.h>
#include <stdlib.h>

int a=20; /* �����ܼ� */
int b=50; /* �����ܼ� */
void fun1();

int main()
{
    int a=10; /* �ϰ��ܼ� */
    printf("�D�{�����Aa=%d�Ab=%d\n",a,b);
    fun1();
    
    system("PAUSE");
    return 0;
}	

void fun1()
{
    int a=30; /* �ϰ��ܼ� */
    printf("�Ƶ{�� fun1 ���Aa=%d�Ab=%d\n",a,b);
}	

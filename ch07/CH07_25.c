#include <stdio.h>
#include <stdlib.h>

int main()
{
	void * p=(void *)100;	
	/*void *p ���Э�l�Ȭ� (void *) ���A���� 100�C*/
    printf("Address: %p\n",p);
    /*(void *) 100 ����}�� 0x00000064*/
	printf("Integer: %d\n",(int*)p);
	/*�N (void *)100 �H��ƫ��A�૬�A��Ȭ� 100*/
	printf("Character: %c\n",(char*)p);	
	/*�H�r�����A�૬�A�o�쪺���G�O�p�g���ud�v�r��*/
	
    system("PAUSE");
	return 0;
}	

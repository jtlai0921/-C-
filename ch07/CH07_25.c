#include <stdio.h>
#include <stdlib.h>

int main()
{
	void * p=(void *)100;	
	/*void *p 指標原始值為 (void *) 型態的值 100。*/
    printf("Address: %p\n",p);
    /*(void *) 100 的位址為 0x00000064*/
	printf("Integer: %d\n",(int*)p);
	/*將 (void *)100 以整數型態轉型，其值為 100*/
	printf("Character: %c\n",(char*)p);	
	/*以字元型態轉型，得到的結果是小寫的「d」字元*/
	
    system("PAUSE");
	return 0;
}	

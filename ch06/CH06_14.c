#include<stdio.h>
#include<stdlib.h>

int main()
{
	int length;/*�Χ@�p��r�ꪺ����*/
	char str[30];/* �ŧi���r��̦h�i�x�s30�Ӧr��*/ 
	
	printf("�п�J�r��:");
	/*��J�r��*/
	gets(str);
	printf("��J���r�ꬰ:%s\n",str);
	length=0;
	while (str[length]!='\0')
	 length++; 
 	printf("���r�꦳%d�ӭ^��r��\n",length);
    
    system("pause");
    return 0;
}

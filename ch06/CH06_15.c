#include <stdio.h>
#include <stdlib.h>

int main()
{
	char S1[30];                     
	char S2[30];                    
	char S3[60];                                  
	int count,record;
    
    printf("�r�� S1 �����e:");
    gets(S1);                                   
	printf("�r�� S2 �����e:");
	gets(S2);                               

	record=0;     /* �����ܼ� record �k 0�A�ΨӰO�� S3 �ҫ����}�C���� */

    for (count=0; S1[count] != '\0'; count++, record++)  /* �N S1 �r��ƻs�� S3 */
		S3[record]=S1[count];

	for (count=0; S2[count] != '\0'; count++, record++)  /* �N S2 �r��ƻs�� S3 */
		S3[record]=S2[count];

	S3[record]='\0';/* �r��̫�n�[�W NULL �r�� */

    printf("�s���᪺�r�� S3:%s", S3);/* ��ܦr��s�������G */
	printf("\n");   /* ���� */
    
    system("pause");   
    return 0;                                       
}

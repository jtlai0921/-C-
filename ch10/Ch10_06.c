#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    if((fptr = fopen("test.txt", "r")) ==NULL)    /* �ˬd�ɮ׬O�_�}�Ҧ��\ */
        puts("�L�k�}���ɮ�");
    else
        while( !feof(fptr) ) /* �P�_�ɮ׬O�_Ū������ */
        printf("%c", fgetc(fptr));/*�@��Ū���@�Ӧr��,�v�B�N��r�ɤ��eŪ�X */
    
    fclose(fptr);    /* �����ɮ� */
    printf("\n");
    
    system("pause");
    return 0;

}


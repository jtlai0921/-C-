#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr,*fptr1;
    char str[31];
    
    fptr = fopen("Novel.txt", "r");
    fptr1=fopen("Novelcopy.txt","w");
    
    if(fptr ==NULL|| fptr1==NULL)    /* �ˬd�ɮ׬O�_�}�Ҧ��\ */
        puts("�L�k�}���ɮ�");
    else
        while( !feof(fptr) )/* �P�_�ɮ׬O�_Ū������ */
        {
            fgets(str,31, fptr);    /* str[31]�O�Ψ��x�s'\0' */
            printf("%s\n", str);
            fputs(str,fptr1); /* �Nstr�r��g�J��fptr1�ɮפ� */ 
            
        }

    fclose(fptr);    /* �����ɮ� */
    fclose(fptr1); 
    
    system("pause");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char area[4],tel[9];
        
    printf("�п�J�q�ܸ��X(�t�ϽX)�@�Q�X:");
    scanf("%3s%7s",area,tel);
    /* �H�T��ƻP�C��ƨӿ�J���*/ 
    
    printf("�z���q�ܰϽX��:%s\n",area);
    printf("�z���q�ܸ��X��:%s\n",tel);    
    /* �C�L�X�q�ܰϽX�P�q�ܸ��X */ 
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float* piF=(float*)malloc(sizeof(float));
    /* �N���Ы��V�B�I�ưʺA�t�m�O�ЪŶ� */
    
    printf("�п�JpiF���� =");
    scanf("%f",piF);/* ��JpiF���� */ 
    printf("\n");
    printf("piF�ҫ��V����}���e���� %f\n",*piF);
    printf("���� piF �ҫ��V���O�ЪŶ�..\n\n");
    free(piF);/* �N����piF���Ŷ����� */ 
    printf("�Ŷ������,piF�ҫ��V����}���e���� %f\n\n",*piF);  
    
    system("pause");  
    return 0;
}


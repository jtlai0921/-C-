#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*�ŧi�@�ӫ��ЧκA���ܼơA�ܼƦW��:pFile*/
     
    pFile = fopen ("fileIO.txt","r");   /*Ū���覡�}���ɮ� */
    if (pFile!=NULL){                   /*����Ф���Null�� */
       printf("�ɮ�Ū�����\\\n");        /*���Ū�����\ */
       fclose (pFile);                  /*�}�Ҧ��\��O�o���� */
    }
    else
       printf("�ɮ�Ū������\\n");        /*����Ь�Null�ɡA��ܥ���    */

    system("pause");
    return 0;
}

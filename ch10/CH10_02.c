#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*�ŧi�@�ӫ��ЧκA���ܼơA�ܼƦW��:pFile */
    
    pFile = fopen ("fileIO.txt","r");   /*Ū���覡�}���ɮ�*/
    if (pFile!=NULL)
    {
       fclose (pFile);                  /*�����ɮ� */
       printf ("�ɮ��������\\\n") ; 
    }
    
    system("pause");
    return 0;
}

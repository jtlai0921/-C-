#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*�ŧi�@�ӫ��ЧκA���ܼơA�ܼƦW��:pFile */
    
    pFile = fopen ("fileIO.txt","a");   /*�s�W�覡�}���ɮ�*/
    if (pFile!=NULL)
    {
       fputs ("�s�W���",pFile);        /*�g�J��ƨ���w�������ܼ� */
       fclose (pFile);                  /*�����ɮ� */
       printf ("�ɮ׷s�W���\\\n") ; 
    }
    
    system("pause");
    return 0;
}

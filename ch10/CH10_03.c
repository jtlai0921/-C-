#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*�ŧi�@�ӫ��ЧκA���ܼơA�ܼƦW��:pFile */
    
    pFile = fopen ("fileIO.txt","w");   /*�g�J�覡�}���ɮ�*/
    if (pFile!=NULL)
    {
       putc (65,pFile);                 /*�g�J�@�Ӧr���AASCII��65 */
       fclose (pFile);                   
       printf ("�r���g�J���\\\n") ; 
    }
    
    system("pause");
    return 0;
}

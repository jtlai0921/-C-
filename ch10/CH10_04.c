#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*�ŧi�@�ӫ��ЧκA���ܼơA�ܼƦW��:pFile*/
    char c; 
    
    pFile = fopen ("fileIO.txt","w");   /*�g�J�覡�}���ɮ�*/
    if (pFile!=NULL)
    {
       for (c = 'A' ; c < 'Z' ; c++)
           putc (c , pFile);
       
       putc (c,pFile);                 /*�g�J�@�Ӧr���AASCII��65 */
       fclose (pFile);                  
       printf ("�r���g�J���\\\n") ; 
    }
    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*�ŧi�@�ӫ��ЧκA���ܼơA�ܼƦW��:pFile*/
    int i; 
    char c; 
    
    pFile = fopen ("fileIO.txt","r");   /*Ū���覡�}���ɮ�*/
    if (pFile!=NULL)
    {
       while ( c != EOF){
           c = getc (pFile);
           printf ("%c",c);              
       } 
       printf ("\n");              

       fclose (pFile);                  /*�����ɮ� */
       printf ("�r��Ū�����\\\n") ; 
    }
    
    system("pause");
    return 0;
}

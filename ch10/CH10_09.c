#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*�ŧi�@�ӫ��ЧκA���ܼơA�ܼƦW��:pFile*/
    int i;
    char fruit[30];
    
    pFile = fopen ("fileIO.txt","w");   /*�g�J�覡�}���ɮ�*/
    if (pFile!=NULL)
    {
       for(i=1;i<=3;i++) {
         printf("�п�J��%d�Ӥ��G�W��?\n",i) ;
         gets(fruit); 
         fprintf(pFile,"��%d�Ӥ��G�W�٬�:(%-8.8s)\n",i,fruit) ; 
       } 
       fclose (pFile);                  /*�����ɮ� */
       printf ("�r��g�J���\\\n") ; 
    }
    
    system("pause");
    return 0;
}

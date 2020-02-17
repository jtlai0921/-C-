#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*宣告一個指標形態的變數，變數名稱:pFile*/
    char c; 
    
    pFile = fopen ("fileIO.txt","w");   /*寫入方式開啟檔案*/
    if (pFile!=NULL)
    {
       for (c = 'A' ; c < 'Z' ; c++)
           putc (c , pFile);
       
       putc (c,pFile);                 /*寫入一個字元，ASCII為65 */
       fclose (pFile);                  
       printf ("字元寫入成功\\n") ; 
    }
    
    system("pause");
    return 0;
}

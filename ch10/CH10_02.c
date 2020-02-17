#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*宣告一個指標形態的變數，變數名稱:pFile */
    
    pFile = fopen ("fileIO.txt","r");   /*讀取方式開啟檔案*/
    if (pFile!=NULL)
    {
       fclose (pFile);                  /*關閉檔案 */
       printf ("檔案關閉成功\\n") ; 
    }
    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*宣告一個指標形態的變數，變數名稱:pFile */
    
    pFile = fopen ("fileIO.txt","a");   /*新增方式開啟檔案*/
    if (pFile!=NULL)
    {
       fputs ("新增資料",pFile);        /*寫入資料到指定的指標變數 */
       fclose (pFile);                  /*關閉檔案 */
       printf ("檔案新增成功\\n") ; 
    }
    
    system("pause");
    return 0;
}

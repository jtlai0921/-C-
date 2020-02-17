#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*宣告一個指標形態的變數，變數名稱:pFile*/
     
    pFile = fopen ("fileIO.txt","r");   /*讀取方式開啟檔案 */
    if (pFile!=NULL){                   /*當指標不為Null時 */
       printf("檔案讀取成功\\n");        /*表示讀取成功 */
       fclose (pFile);                  /*開啟成功後記得關閉 */
    }
    else
       printf("檔案讀取失敗\\n");        /*當指標為Null時，表示失敗    */

    system("pause");
    return 0;
}

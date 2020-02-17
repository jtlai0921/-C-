#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * pFile;                       /*宣告一個指標形態的變數，變數名稱:pFile*/
    int i;
    char fruit[30];
    
    pFile = fopen ("fileIO.txt","w");   /*寫入方式開啟檔案*/
    if (pFile!=NULL)
    {
       for(i=1;i<=3;i++) {
         printf("請輸入第%d個水果名稱?\n",i) ;
         gets(fruit); 
         fprintf(pFile,"第%d個水果名稱為:(%-8.8s)\n",i,fruit) ; 
       } 
       fclose (pFile);                  /*關閉檔案 */
       printf ("字串寫入成功\\n") ; 
    }
    
    system("pause");
    return 0;
}

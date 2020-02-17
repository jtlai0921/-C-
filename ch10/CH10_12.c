#include <stdio.h>
#include <stdlib.h>

int main() 
{
  FILE *pFile;
  char c[30]; 
  char *d;
  int n;

  pFile = fopen("fileIO.txt", "r");
  if(pFile!=NULL) {
    printf("檔案開啟成功\\n");
    
    n = fread(c, 1, 10, pFile); /*讀取資料流資料，填入指定的指標。 */
    c[n] = '\0';                /*設定最後一個字元為\0 */

    printf("%s\n", c);          /*印出字串 */
    printf("讀出的字元數: %d\n\n", n);

    fclose(pFile);              /*關閉資料流 */

    pFile = fopen("fileIO.txt", "r");
    n = fread(d, 1, 10, pFile); /*讀取資料流資料，填入指定的指標。  */

    printf("%s\n", d);
    printf("讀出的字元數: %d\n\n", n);

    fclose(pFile);              
    
    system("pause");
    return 0;
  }else {
    printf("檔案開啟錯誤\n");
    return 1;        
  }
}

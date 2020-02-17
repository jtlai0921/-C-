#include <stdio.h>
#include <stdlib.h>

int main() 
{
  FILE *pFile;
  int i;
  char c; 

  pFile = fopen("fileIO.txt", "w");
  if(pFile!=NULL) {
    for(i='A';i<='Z';i++){
       putc(i,pFile); 
    } /*建立A~Z的資料於fileIO.txt檔案中*/

    fclose(pFile);              
  }
  
  pFile = fopen("fileIO.txt", "r");
  if(pFile!=NULL) {
    for(i=1;i<=5;i++) {
        c=getc(pFile) ;
        printf("%c",c) ;
        fseek(pFile,3,SEEK_CUR);/*利用fseek()函數，每次跳躍3個間格*/
    } /*利用for迴圈，共執行五次*/

    fclose(pFile);              
  }  
  
  system("pause");
  return 0;
}

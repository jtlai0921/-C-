#include <stdio.h>
#include <stdlib.h>

int main() 
{
  FILE *pFile;
  char c; 
  int i;

  pFile = fopen("fileIO.txt", "w");
  if(pFile!=NULL) {
    for(i='A';i<='Z';i++){
       putc(i,pFile); 
    } 

    fclose(pFile);              /*關閉資料流*/
  }
  
  pFile = fopen("fileIO.txt", "r");
  if(pFile!=NULL) {
    for(i=1;i<=5;i++) {
        c=getc(pFile) ;
        printf("%c",c) ;
        rewind(pFile); 
    /*執行迴圈時，每次皆跳回資料流起點，固輸出都讀到第一個字元*/
    } 

    fclose(pFile);              /*關閉資料流*/
  }  
  
  system("pause");
  return 0;
}

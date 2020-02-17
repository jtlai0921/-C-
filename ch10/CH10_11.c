#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE * pFile;
  char buffer[10];/*宣告字元陣列*/ 

  pFile = fopen ( "fileIO.txt" , "w" );
  if(pFile!=NULL){
      printf("請輸入您的出生年月日(yyyy/MM/dd)?"); 
      gets(buffer);/*利用gets()函數取得使用者輸入的資料*/
      fwrite (buffer , 1 , sizeof(buffer) , pFile );
      /*以區塊方式寫入資料*/ 
      fclose (pFile);                  
  }

  system("pause");
  return 0;
} 

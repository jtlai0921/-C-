#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE  *pFile; 	                  
    int length=10,width=5,height=30;
    /*變數宣告*/ 
    pFile=fopen("fileIO.txt","w+");
    /*可讀取或寫入方式開啟檔案*/ 
    if(pFile != NULL){ 
  
       fprintf(pFile,"%d %d %d",length,width,height);
       /*寫入資料*/ 
       fscanf(pFile,"%d %d %d",&length,&width,&height);	
       /*讀取資料*/ 
       printf("長: %d \n寬: %d \n高: %d",length,width,height);

       fclose(pFile);
     }else 
       printf("fileIO.txt開啟有誤");
     
     system("pause");
     return 0; 
}

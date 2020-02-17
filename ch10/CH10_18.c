#include <stdio.h> 
#include <fcntl.h>
#define  length    512 /*定義一個常數，代表讀取長度*/

int main()
{
    int  fileID;     
    char buff[length];
    const char* filename="fileIO.txt"; 
    fileID = open(filename,O_RDONLY,0);
    /*宣告int型態值來記錄開啟的檔案ID碼*/
    
    if(fileID!=-1)/*確認檔案開啟成功*/
    {
     if(read(fileID,buff,length)>0)/*確認檔案讀取成功*/
     {
      printf("%s \n",buff);
      }   
     } 
    close(fileID);    
    
    system("pause");
    return 0; 
}

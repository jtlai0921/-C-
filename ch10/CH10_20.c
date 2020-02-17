#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  fileID,i;                        
    const char *filename;
    char buff[]={'A','B','C','D','E'};/*定義一個字元陣列*/
    
    filename="fileIO.txt";

    fileID = open(filename,O_CREAT | O_RDWR);   
    /*開啟指定的檔名，若是沒有建立此檔案，並可供讀寫*/
    for(i=1;i<=4;i++)/*迴圈共執行四次*/
    {
      write(fileID,buff,5);/*寫入buff代表的資料至檔案*/      
      lseek(fileID,-i,SEEK_CUR);/*設定檔案讀寫指標由目前位置偏移-i*/
      write(fileID,"-",1);           
    }
    
    close(fileID);
    
    system("pause");
    return 0;
}

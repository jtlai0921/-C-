#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  fileID;                    
    const char *filename;/*定義一個檔名變數*/
    char *buff;/*定義一個準備寫入資料的變數*/
    int intRst;
    
    buff="1234567890";    
    filename="fileIO.txt";

    fileID = open(filename,O_CREAT | O_RDWR);   
    /*開啟指定的檔名，若是沒有建立此檔案，並可供讀寫*/
    intRst=write(fileID,buff,10);/*將資料寫入檔案*/
    if(intRst!=-1)/*判斷資料是否寫入成功*/
       printf("data write success\n");
    
    close(fileID);
    system("pause");
    return 0;
}

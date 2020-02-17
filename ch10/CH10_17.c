#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> /* 開啟模式常數所定義的標頭檔 */ 

int main() 
{
    const char *filename1="fileIO1.txt"; 
    const char *filename2="fileIO2.txt"; 
    /* 宣告並設定兩個檔案名稱*/ 
    int fileID1,fileID2;
    /*宣告兩個int型態值來記錄開啟的檔案ID碼*/
    fileID1=open(filename1,O_RDONLY,0);
    fileID2=open(filename2,O_RDONLY,0);
    
    if(fileID1!=-1)
    { 
        printf ("fileIO1 open success \n");
        printf ("file ID is %d \n",fileID1);        
    } 

    if(fileID2!=-1)
    { 
        printf ("fileIO2 open success \n");
        printf ("file ID is %d \n",fileID2);        
    }
    
    if (close(fileID1)==0) 
    {
        printf ("fileIO1 close success \n");         
    } 

    if (close(fileID2)==0) 
    {
        printf ("fileIO2 close success \n");         
    } 
    
    system("pause");
    return 0;
}

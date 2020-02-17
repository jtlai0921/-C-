#include <stdio.h>
#include <fcntl.h>

int main() 
{
    const char *filename="fileIO.txt"; 
    int intRst;
    intRst=open(filename,O_RDONLY,0);
    /*開啟指定檔名的檔案，模式為唯讀*/
    if(intRst==-1)
    { 
        printf ("file open fail \n");
        /*當回傳為-1表示失敗*/
    } 
    else
    { 
        printf ("file open success  \n");
    /*本程式執行時，已經存在fileIO.txt檔，所以結果是成功*/
    } 

    system("pause");
    return 0;
}

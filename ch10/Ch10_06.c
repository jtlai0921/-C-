#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    if((fptr = fopen("test.txt", "r")) ==NULL)    /* 檢查檔案是否開啟成功 */
        puts("無法開啟檔案");
    else
        while( !feof(fptr) ) /* 判斷檔案是否讀取完畢 */
        printf("%c", fgetc(fptr));/*一次讀取一個字元,逐步將文字檔內容讀出 */
    
    fclose(fptr);    /* 關閉檔案 */
    printf("\n");
    
    system("pause");
    return 0;

}


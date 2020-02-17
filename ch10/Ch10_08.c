#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr,*fptr1;
    char str[31];
    
    fptr = fopen("Novel.txt", "r");
    fptr1=fopen("Novelcopy.txt","w");
    
    if(fptr ==NULL|| fptr1==NULL)    /* 檢查檔案是否開啟成功 */
        puts("無法開啟檔案");
    else
        while( !feof(fptr) )/* 判斷檔案是否讀取完畢 */
        {
            fgets(str,31, fptr);    /* str[31]是用來儲存'\0' */
            printf("%s\n", str);
            fputs(str,fptr1); /* 將str字串寫入到fptr1檔案中 */ 
            
        }

    fclose(fptr);    /* 關閉檔案 */
    fclose(fptr1); 
    
    system("pause");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>/* 含括 <string.h> 標頭檔 */

int main()
{
     
     char str1[40]; 
     char str2[40];
     
     printf("請輸入第一個字串:"); 
     gets(str1);
     printf("請輸入第二個字串:"); 
     gets(str2);
     
     strcat(str1,str2);/* 將兩字串連結 */ 
     printf("%s\n",strlwr(str1));/* 將字串內的大寫字母轉為小寫字母 */ 
     
     system("pause");
     return 0;
}

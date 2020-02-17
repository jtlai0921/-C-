#include <stdio.h>
#include <stdlib.h>

int main()
{
	char S1[30];                     
	char S2[30];                    
	char S3[60];                                  
	int count,record;
    
    printf("字串 S1 的內容:");
    gets(S1);                                   
	printf("字串 S2 的內容:");
	gets(S2);                               

	record=0;     /* 把整數變數 record 歸 0，用來記錄 S3 所指的陣列元素 */

    for (count=0; S1[count] != '\0'; count++, record++)  /* 將 S1 字串複製到 S3 */
		S3[record]=S1[count];

	for (count=0; S2[count] != '\0'; count++, record++)  /* 將 S2 字串複製到 S3 */
		S3[record]=S2[count];

	S3[record]='\0';/* 字串最後要加上 NULL 字元 */

    printf("連結後的字串 S3:%s", S3);/* 顯示字串連結的結果 */
	printf("\n");   /* 換行 */
    
    system("pause");   
    return 0;                                       
}

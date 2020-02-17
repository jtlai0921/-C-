#include<stdio.h>
#include<stdlib.h>

int main()
{
	int length;/*用作計算字串的長度*/
	char str[30];/* 宣告此字串最多可儲存30個字元*/ 
	
	printf("請輸入字串:");
	/*輸入字串*/
	gets(str);
	printf("輸入的字串為:%s\n",str);
	length=0;
	while (str[length]!='\0')
	 length++; 
 	printf("此字串有%d個英文字元\n",length);
    
    system("pause");
    return 0;
}

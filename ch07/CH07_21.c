#include <stdio.h>
#include <stdlib.h>
#include <string.h>/* 使用到strlen()函數 */ 

int main()
{
	char *name;
	int i;
	
    printf("請輸入英文字串長度：");
	scanf("%d",&i);
	name = (char *)malloc((i+1)*sizeof(char));
	/* i+1是為了要將字串的結尾字元 '\0' 加入到字串最後*/ 
	printf("請輸入英文字串：");
	scanf("%s",name);
	strcat(name,"\0");
	printf("-%s-\n",name);
	printf("字串長度：%d\n",strlen(name));
	
    system("PAUSE");
	return 0;
}

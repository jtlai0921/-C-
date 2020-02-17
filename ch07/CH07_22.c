#include <stdio.h>
#include<stdlib.h>

int main()
{
	char **star;	/* 宣告字元指標 */ 
	int row,col;
	int i,j;
	
    printf("請輸入列數：");
	scanf("%d",&row);
	printf("請輸入欄數：");
	scanf("%d",&col);
	
	star=(char **)malloc(row*sizeof(char *));
	/*使用 star 雙重指標配置一個具有 row個元素的一維陣列*/
	for(i=0;i<row;i++){
		star[i]=(char *)malloc(col*sizeof(char));
	/*個別產生一個具有 col個元素的一維陣列*/	
        for(j=0;j<col;j++){
			star[i][j]='*';
		}	
	}
	
    for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%c ",star[i][j]);
		}/* 輸出此二維陣列的內容 */ 
		printf("\n");
	}	
	
    system("PAUSE");
	return 0;
}

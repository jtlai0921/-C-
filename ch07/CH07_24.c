#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char **month;	  
	char temp[20];	
	int row,col;
	int i,j;	
	char month_name[12][10]=
     {"January","February","March","April","May","June","July","August",
      "September","October","November","December"};
     /* 宣告二維字元陣列儲存12月份的名稱 */ 
	month=(char **)malloc(12*sizeof(char *));
	/* 動態配置12個字串 */
    for(i=0;i<12;i++){
		strcpy(temp,"");	
		strcpy(temp,month_name[i]);
		printf("長度為：%d\n",strlen(temp));		
		month[i]=(char *)malloc((strlen(temp)+1)*sizeof(char));
		/* 動態配置該字串長度+1的字元 */ 
        strcpy(month[i],temp);/* 將temp的資料指定給month[i]元素 */ 
	}
	for(i=0;i<12;i++){ 
		printf("%d 月的英文名稱：%s\n",i+1,month[i]);
	}
	system("PAUSE");
	return 0;
}

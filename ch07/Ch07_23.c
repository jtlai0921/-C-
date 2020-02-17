#include <stdio.h>
#include<stdlib.h>

int main()
{
	char **month;	  
	int row,col;
	int i,j;	
	
     char month_name[12][10]=
     {"January","February","March","April","May","June","July","August",
      "September","October","November","December"};
	 /* 宣告二維字元陣列儲存12月份的名稱 */ 
     month=(char **)malloc(12*sizeof(char *));
	 /* 動態配置12個字串 */ 
	 for(i=0;i<12;i++){
		month[i]=(char *)malloc(10*sizeof(char));
		/* 動態配置10個字元 */ 
		month[i]=month_name[i];
	  }
	 for(i=0;i<12;i++){
		printf("%d 月的英文名稱：%s\n",i+1,month[i]);
	 }
	
    system("PAUSE");
	return 0;
}

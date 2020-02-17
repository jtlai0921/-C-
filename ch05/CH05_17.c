#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int input = 0;     
	 char replay=0;     
	 
     do{        
	   puts("輸入整數值：");
	   scanf("%d",&input);  /* 輸入整數 */      
	   printf("輸入的數是否為奇數？");
       printf("%c\n",((input % 2) ? 'Y': 'N'));
	   /* 利用條件運算子來判斷 */ 
       printf("繼續(1:繼續 0:結束)？");
	   
       replay=getche();/* 輸入字元 */ 
       printf("\n");
          
	  } while(replay!='0');   /* do while迴圈 */     
	
	system("pause");
	return 0;	
}

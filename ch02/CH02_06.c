#include<stdio.h>
#include <stdlib.h>

int main()
{	
	/*宣告字元變數*/
	char char1='Y';/* 加上單引號 */
	char char2=88;
	/*印出字元和它的ASCII碼*/
 	
    printf("字元char1= %c 的 ASCII碼=%d\n",char1,char1);
 	char1=char1+32; /* 字元的運算功能 */
   	printf("字元char1= %c 的 ASCII碼= %d\n",char1,char1); 
     /* 印出加法運算後的字元和ASCII碼 */  
    
    printf("字元char2= %c 的 ASCII碼=%d\n",char2,char2);
 	char2=char2-32; /* 字元的運算功能 */
   	printf("字元char2= %c 的 ASCII碼= %d\n",char2,char2); 
     /* 印出減法運算後的字元和ASCII碼 */  
    
    system("pause");
    return 0;
} 

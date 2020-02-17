#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	
	printf("請輸入國文成績?");
	scanf("%d",&score);

	if ( score>=60 ) 
		goto pass;		  /*找到標籤名稱為"pass"的程式敘述繼續執行程式.*/
	else
		goto nopass;	  /*找到標籤名稱為"nopass"的程式敘述繼續執行程式.*/	

	pass:                         /*pass標籤*/
	printf("---------------------------------\n");
	printf("國文及格了!\n");       
	goto TheEnd;          /*找到標籤名稱為"TheEnd"的程式敘述繼續執行程式*/

	nopass:               /*nopass標籤*/
	printf("---------------------------------\n");
	printf("國文不及格喔!\n");

	TheEnd:  
    printf("---------------------------------\n");
    printf("程式執行完畢!\n");  /*TheEnd標籤*/
	
	system("pause");
    return 0;
}




#include <stdio.h>
#include <stdlib.h>		

int main()
{
	char select;
	puts("    (1) 排骨便當");
	puts("    (2) 海鮮便當");
	puts("    (3) 雞腿便當");
	puts("    (4) 魚排便當");
	printf("    請輸入您要購買的便當：");
	select=getche();/*輸入字元並存入變數select*/
    printf("\n===================================\n");
    
	switch(select)
	{
	case '1':               /*如果select等於1*/
		puts("排骨便當一份75元");                
		break;                                        /*跳出switch*/
	case '2':         /*如果select等於2*/
		puts("海鮮便當一份85元");                  
		break;        /*跳出switch*/
	case '3':      /*如果select等於3*/
		puts("雞腿便當一份80元");               
		break;     /*跳出switch*/
	case '4':      /*如果select等於3*/
	    puts("魚排便當一份60元");               
		break;   /*跳出switch*/
	default:        /*如果select不等於1,2,3,4任何一個*/
		printf("選項錯誤\n");                        
	}
    printf("===================================\n");
    
    system("pause");
    return 0;	
}

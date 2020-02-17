#include <stdio.h>
#include <stdlib.h>

int main()
{
	int check_key=0;   // 宣告整數變數 check_key
    
    while (check_key == 1) 
     printf("程式進入while迴圈\n");   /* while 迴圈 */
    
    do	      
     printf("程式進入do...while迴圈\n");   
     while (check_key == 1);   /* do…while 迴圈 */
	
	system("pause");
	return 0;	
}

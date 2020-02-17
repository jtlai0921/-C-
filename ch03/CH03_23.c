#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1,c2;  /* 定義字元變數 c1,c2 */
     
    printf("按任一鍵繼續(getche())...");
    c1=getche();/* 使用getche()輸入字元 */
    printf("  輸入的字元:%c\n",c1); 
    printf("\n"); 
         
    printf("按任一鍵繼續(getch())...");
    c2=getch();/* 使用getche()輸入字元 */
    printf("  輸入的字元:%c\n",c2); 
    printf("\n"); 
    
    system("pause");
    return 0;
}

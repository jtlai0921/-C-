#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iVal=345;/* 宣告iVal整數值 */ 
    
    /* 旗標設定字元示範 */
    printf("%%d  格式輸出結果=%d\n",iVal);
    printf("+6d 格式輸出結果=%+6d\n",iVal);
    printf("-6d 格式輸出結果=%-6d\n",iVal);
    printf("+#6o格式輸出結果=%+#6o\n",iVal);
    printf("+#6x格式輸出結果=%+#6x\n",iVal);
    printf("06d 格式輸出結果=%06d\n\n",iVal);
    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number=123.456;
    float number1=1234567.1234;
      
    printf("number的f格式輸出結果=%f\n",number); /*以%f格式化字元輸出*/ 
    printf("number的e格式輸出結果=%e\n",number); /*以%e格式化字元輸出*/ 
    printf("number的g格式輸出結果=%g\n",number); /*以%g格式化字元輸出*/ 
    printf("---------------------------------------\n");
    printf("number的f格式輸出結果=%f\n",number1); /*以%f格式化字元輸出*/ 
    printf("number的e格式輸出結果=%e\n",number1); /*以%e格式化字元輸出*/ 
    printf("number的g格式輸出結果=%g\n",number1); /*以%g格式化字元輸出*/ 
    
    system("pause");
    return 0;
}

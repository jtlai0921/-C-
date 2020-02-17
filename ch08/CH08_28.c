#include <stdio.h>
#include <stdlib.h>

#define OS_ENV 95   /*#define 指令定義識別字 OS_ENV*/

#if OS_ENV == 95     /*若 (OS_ENV == 95)*/
  #define OS "Windows 95"    /*則使用 #define 指令定義識別字 OS*/
#elif OS_ENV == 98    /*若 (OS_ENV == 98)*/
  #define OS "Windows 98"    /*則使用 #define 指令定義識別字 OS*/
#elif OS_ENV == 2000     /*若 (OS_ENV == 2000)*/
  #define OS "Windows 2000"       /*則使用 #define 指令定義識別字 OS*/
#else	   
  #define OS "Windows XP"   /*若前面所列項目都不符合，則進行此區塊的程式敘述*/
#endif	

int main()
{
    printf("執行編譯的作業平台 =>%s\n",OS);        /*顯示提示訊息與定義的識別字 OS*/    
    
    system("pause");    
    return 0;
}

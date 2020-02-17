#include <stdio.h>
#include <stdlib.h>

int main()
{

    int bArray[5];    /* 定義整數陣列 bArray */
    float cArray[7];  /* 定義浮點數陣列 cArray */
       
    printf("bArray陣列有:%d 位元組,共有%d個元素\n",
    sizeof(bArray),sizeof(bArray)/sizeof(int));
    /* 顯示 bArray 佔用的記憶體空間與元素個數 */
    printf("cArray陣列有:%d 位元組,共有%d個元素\n",
    sizeof(cArray),sizeof(cArray)/sizeof(float));
    /* 顯示 cArray 佔用的記憶體空間 與元素個數*/
   
   system("pause");
   return 0; 
  }

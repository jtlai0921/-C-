#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;       /* 定義整數變數 i */
  float f=123.456F; /* 定義單精度浮點數變數 f*/
  double d;
  char c='a';
  short sum;
  i=100+c; /* c的ASCII碼為97 */ 
  printf("i=%d\n",i);
  d=i+f; 
  /* 將整數i與單精度浮點數f加法運算後，存入倍精度浮點數d*/
  printf("d=%f\n",d);
  printf("d所佔的位元組為%d位元組\n",sizeof(d)); 
  sum=d;
  printf("sum=%d\n",sum);
  printf("sum所佔的位元組為%d位元組\n",sizeof(sum));
  
  system("pause");
  
}
  
  
    
    
    
    
    


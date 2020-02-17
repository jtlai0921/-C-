#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a;
  int b=12;
  float _c=117.12345;
  
  printf("變數a=%d\n",a); /*列印出未初始化的a值*/
  printf("變數b=%d\n",b); /*列印出已初始化的b值*/
  printf("變數_c=%f\n",_c);/*列印出已初始化的_c值*/
  
  system("pause");
  return 0;
}

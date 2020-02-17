#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,arr[5]={1,2,3};/* 有些元素並未指定初值 */ 
     
     for(i=0;i<5;i++)
      printf("arr[%d]=%d\n",i,arr[i]);/* 輸出所有元素值 */ 
     
     system("pause");
     return 0;
}

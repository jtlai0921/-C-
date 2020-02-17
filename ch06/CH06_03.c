#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,arr[5];/*宣告整數陣列,並未同步設值*/ 
     
     arr[0]=1;
     arr[1]=2;
     arr[2]=3;/* arr[3]與arr[4]並未設定初值 */ 
     
     for(i=0;i<5;i++)
      printf("arr[%d]=%d\n",i,arr[i]);/* 輸出所有元素值 */ 
     
     system("pause");
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct size /* 定義結構size */
   {
      int length;
      int width;
      int height;
   };
   struct parcel		/* 定義巢狀結構parcel */
   {
      float weight;
      struct size scale;		
   } large={35.8,{160,90,70}};   /* 宣告結構變數large*/
   
   printf("箱子重量:%0.1f 公斤\n",large.weight);  
   printf("箱子長度:%d 公分\n",large.scale.length);
   printf("箱子寬度:%d 公分\n",large.scale.width);
   printf("箱子高度:%d 公分\n",large.scale.height);
   
   system("pause");
   return 0;
}

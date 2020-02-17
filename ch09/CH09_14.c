#include <stdio.h>
#include <stdlib.h>

struct box /* 定義結構 */
   {
      int length;
      int width;
      int height;
      float weight;
   };
   struct parcel /*巢狀結構 */
   {
      int price;
      struct box scale;		
   };
   
struct parcel heavy(struct parcel,struct parcel);/* 傳值呼叫的函數原型宣告 */
 

int main(void)
{
    struct parcel desk1={1500,{130,145,153,12.5}};   
    struct parcel desk2={2000,{160,115,150,13.8}}; 
    struct parcel desk; 
    
    desk=heavy(desk1,desk2);/* 呼叫heavy函數 */ 
    printf("比較後較重包裹的詳細規格及價值\n");
    printf("====================================\n");
    printf("包裹價值= %d 元\n",desk.price);  
    printf("包裹長度= %d 公分\n",desk.scale.length);
    printf("包裹寬度= %d 公分\n",desk.scale.width);
    printf("包裹高度= %d 公分\n",desk.scale.height);
    printf("包裹重量= %0.1f 公斤\n",desk.scale.weight); 
    printf("====================================\n");   
   
    system("pause");
    return 0;
}
/* 定義函數 */ 
struct parcel heavy(struct parcel d1,struct parcel d2)
{
   if (d1.scale.weight>d2.scale.weight)
    return d1; /* 傳回d1結構變數 */ 
    else
    return d2;  /* 傳回d2結構變數 */ 
}

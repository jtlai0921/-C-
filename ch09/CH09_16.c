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
   
 
void discount(struct parcel*);/* 傳址呼叫函數原型宣告 */

int main()
{
    struct parcel desk={1500,{130,145,153,12.5}};         
    if (desk.price>=1200)
            discount(&desk); /*desk.price>=1200,呼叫discount()函數*/ 
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
/* 定義傳址呼叫函數 */ 
void discount(struct parcel *d1)
{
   printf("打五折後包裹的詳細規格及價值\n");
   d1->price=0.5*d1->price;
}

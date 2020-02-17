#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    float length;
    float *width;/*成員為指標型態*/ 
};  /*宣告結構型態*/ 

int main()
{
    struct rectangle rec1;
    float w;
    
    rec1.length=20;/*設定長度為20*/ 
    rec1.width=&w;/*指向實體位址*/ 
    printf("請輸入寬度:"); 
    scanf("%f",&w);
    
    printf("面積=%.2f\n",rec1.length*(*rec1.width));
    /*計算長方形面積*/    
    system("pause");
    return 0;
}

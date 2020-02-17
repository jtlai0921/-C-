#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    float length;
    float *width;
};  /*宣告結構型態*/ 

int main()
{
    struct rectangle rec;
    struct rectangle *rec1;/*宣告為結構指標*/ 
    
    float w;
    
    rec.length=3.5;
    printf("請輸入寬度 :"); 
    scanf("%f",&w);
    rec.width=&w;
    rec1=&rec;
    printf("面積=%.2f\n",rec1->length*(*rec1->width));
    /* rec1為結構指標的存取方式 */ 
          
    system("pause");
    return 0;
}

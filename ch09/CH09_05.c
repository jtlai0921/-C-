#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    float length;
    float *width;
};  /*�ŧi���c���A*/ 

int main()
{
    struct rectangle rec;
    struct rectangle *rec1;/*�ŧi�����c����*/ 
    
    float w;
    
    rec.length=3.5;
    printf("�п�J�e�� :"); 
    scanf("%f",&w);
    rec.width=&w;
    rec1=&rec;
    printf("���n=%.2f\n",rec1->length*(*rec1->width));
    /* rec1�����c���Ъ��s���覡 */ 
          
    system("pause");
    return 0;
}

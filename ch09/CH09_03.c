#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    float length;
    float *width;/*���������Ы��A*/ 
};  /*�ŧi���c���A*/ 

int main()
{
    struct rectangle rec1;
    float w;
    
    rec1.length=20;/*�]�w���׬�20*/ 
    rec1.width=&w;/*���V�����}*/ 
    printf("�п�J�e��:"); 
    scanf("%f",&w);
    
    printf("���n=%.2f\n",rec1.length*(*rec1.width));
    /*�p�����έ��n*/    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>/*�ϥΤT�����,�����t�Amath.h��*/ 

#define PI 3.1415926

int main()
{
 double (*pF)(double);/*��ƫ��Ыŧi*/ 	
 pF=sin;/*�Nsin��ƪ���}���VpF*/ 
 printf("%f\n",pF(PI/2));
 /*�ϥ�pF()����sin()��ƪ��\��*/ 
 pF=cos;/*�Ncos��ƪ���}���VpF*/ 
 printf("%f\n",pF(PI));
 /*�ϥ�pF()����cos()��ƪ��\��*/ 
 
 system("PAUSE");
 return 0;
}	

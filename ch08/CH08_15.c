#include <stdio.h>
#include <stdlib.h>
#include <math.h>/*ㄏノàㄧ计,ゲ斗珹math.h郎*/ 

#define PI 3.1415926

int main()
{
 double (*pF)(double);/*ㄧ计夹*/ 	
 pF=sin;/*盢sinㄧ计pF*/ 
 printf("%f\n",pF(PI/2));
 /*ㄏノpF()磅︽sin()ㄧ计*/ 
 pF=cos;/*盢cosㄧ计pF*/ 
 printf("%f\n",pF(PI));
 /*ㄏノpF()磅︽cos()ㄧ计*/ 
 
 system("PAUSE");
 return 0;
}	

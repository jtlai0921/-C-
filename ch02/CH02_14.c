#include <stdio.h>
#include <stdlib.h>

int main()
{
    
     int no1,no2;         /* �ŧi����ܼ� no1,no2 */
     float f1=456.78,f2=888.333;  /* �ŧi�B�I���ܼ� f1,f2*/
     
     no1=(int)f1; /* ��Ʊj��A�ഫ */ 
     no2=(int)f2; /* ��Ʊj��A�ഫ */ 
     
     printf("no1=%d no2=%d f1=%f f2=%f \n",no1,no2,f1,f2);
     
     system("pause");
     return 0;
}

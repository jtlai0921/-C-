#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number=123.456;
    float number1=1234567.1234;
      
    printf("number��f�榡��X���G=%f\n",number); /*�H%f�榡�Ʀr����X*/ 
    printf("number��e�榡��X���G=%e\n",number); /*�H%e�榡�Ʀr����X*/ 
    printf("number��g�榡��X���G=%g\n",number); /*�H%g�榡�Ʀr����X*/ 
    printf("---------------------------------------\n");
    printf("number��f�榡��X���G=%f\n",number1); /*�H%f�榡�Ʀr����X*/ 
    printf("number��e�榡��X���G=%e\n",number1); /*�H%e�榡�Ʀr����X*/ 
    printf("number��g�榡��X���G=%g\n",number1); /*�H%g�榡�Ʀr����X*/ 
    
    system("pause");
    return 0;
}

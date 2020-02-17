#include <stdio.h>
#include <stdlib.h>

void func1();/* func1()函數原型宣告*/ 
void func2();/* func2()函數原型宣告*/ 

int main()
{
    int i;
    for(i=0;i<3;i++)/*執行for迴圈*/ 
    {
    func1();
    func2();
    }	
    
    system("PAUSE");
    return 0;
}

void func1()
{
     int a;
     static int b;/*宣告static變數b*/ 
     printf("a=%d,b=%d\n",a,b);
     a=20;
     b=50;
}		
void func2()
{
     int c;
     printf("c=%d\n",c);
     c=30;
}	

#include <stdio.h>
#include <stdlib.h>

void func1();/* func1()��ƭ쫬�ŧi*/ 
void func2();/* func2()��ƭ쫬�ŧi*/ 

int main()
{
    int i;
    for(i=0;i<3;i++)/*����for�j��*/ 
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
     static int b;/*�ŧistatic�ܼ�b*/ 
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

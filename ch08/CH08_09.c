#include <stdio.h>
#include <stdlib.h>

void CallMix(int x,int *y)/*傳值與傳址混合函數*/ 
{
     x=30;
     *y=20;
}
int main()
{
    int x = 10,y=10;

    
    printf( "混合型呼叫前：%d %d\n", x ,y);
    CallMix(x,&y);/* 混合性呼叫函數CallMix)*/ 
    printf( "混合型呼叫後：%d %d\n", x ,y);
    
    system("pause");
    return 0;
}


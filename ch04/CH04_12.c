#include<stdio.h>
#include<stdlib.h>

int main()
{	
    int a, b;
    int x=10, y=20, z=30;/*宣告多個變數指定*/
    a=b=5;/*利用混合指定運算子,計算a,b,c*/
    printf("a= %d, b= %d\n",a,b);
    printf("x= %d, y= %d, z= %d\n",x,y,z);
    printf("計算式:x*=a+=y%%=b-=z*=5\n");
    x*=a+=y%=b-=z*=5;/*利用混合指定運算子,計算下列算式*/
    printf("x=%d\n",x);
    
    system("pause");
    return 0;
}

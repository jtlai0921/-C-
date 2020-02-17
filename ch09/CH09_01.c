#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct
    {
        int length;
        int width;
    } rectangle;/*宣告結構型態與變數*/ 

    printf("輸入長與寬：");
    scanf("%d %d", &rectangle.length, &rectangle.width);
    /*輸入長與寬的值*/ 
    printf("長=%d 寬=%d\n", rectangle.length, rectangle.width);
    /* 利用點運算子來輸出結構變數中的各項值*/ 
    system("pause");
    return 0;
}

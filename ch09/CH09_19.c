#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum fruit { APPLE = 1, BANANA, WATERMELON, GRAPE };
    /* 定義列舉型態 fruit */
    char *fruit_name[] = { "apple", "banana",
                           "watermelon", "grape"};
    int i;
    for(i = APPLE; i <= GRAPE; i++)
        printf("第 %d 水果名稱： %s\n", i,fruit_name[i-1]);
    /*第1個列舉常數apple的預設值為1,依次遞增*/
    system("pause");
    return 0;
}

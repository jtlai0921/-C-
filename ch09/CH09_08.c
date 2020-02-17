#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[15];
        int score;
    };/* 宣告student 結構 */ 
    struct student class1[5] = { {"周小侖", 90},
                                 {"程小春", 85},
                                 {"吳金金", 88},
                                 {"張小風", 75},
                                 {"汪青青", 80} };/* 設定5個成員的初始值 */
    int i;
    for(i = 0; i < 5; i++)
        printf("姓名：%s\t成績：%d\n", class1[i].name, class1[i].score);
     /* 列印student結構陣列的成員元素 */ 
     printf("---------以下使用指標常數運算來存取student結構成員---------\n");
     for(i = 0; i < 5; i++)	   
     printf("姓名：%s\t成績：%d\n", (class1+i)->name, (class1+i)->score);
     /* 可以使用指標的觀念來存取student結構成員*/ 
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct product
{
    char name[20];
    int price;
    int number;
};  /* 在全域範圍內作宣告 */
int calculate(struct product);
/* 傳值呼叫的原型宣告 */ 

int main()
{
    struct product book;
    
    printf("書名:");
    gets(book.name);
    printf("單價:");
    scanf("%d",&book.price);
    printf("數量:");
    scanf("%d",&book.number);
    printf("-----------------------------------------\n");
    printf("書名 : %s\n", book.name);
    printf("單價 = %d\t", book.price);
    printf("數量 = %d\n", book.number);
    printf("訂購金額 = %d\n",calculate(book)); /* 呼叫時，直接將結構變數傳入函數即可 */   
    
    system("pause");
    return 0;
}
int calculate(struct product inbook)
{
    int money;
    money = inbook.price*inbook.number;/* 計算訂購金額 */ 
    return money;
}


#include <stdio.h>
#include <stdlib.h> 

int main()
{
    struct book
    {
        char title[30];
        int price;
    };
 
     struct book m1,m2;
     struct book *ptr;    /* 宣告結構指標 */
     
     printf("第一本書的書名：");
     scanf("%s",m1.title);
     printf("書籍定價：");
     scanf("%d", &m1.price);
     
     printf("第二本書的書名：");
     scanf("%s",m2.title);
     printf("書籍定價：");
     scanf("%d", &m2.price);
     printf("---------------------------------\n");
     ptr = &m1; /* 初始化指標 */
     printf("第一種結構指標存取方式：\n");
     printf("書名：");
     printf("%s",ptr->title);/* 第一種結構指標存取方式 */ 
     printf("\t書籍定價：");
     printf("%d",ptr->price);

     ptr = &m2; /* 初始化指標 */
     printf("\n第二種結構指標存取方式：\n");
     printf("書名：");
     printf("%s",(*ptr).title);/* 第二種結構指標存取方式 */ 
     printf("\t書籍定價：");
     printf("%d",(*ptr).price);
     printf("\n");

     system("pause");
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct product
{
    char name[20];
    int price;
    int number;
};  /* �b����d�򤺧@�ŧi */
int calculate(struct product);
/* �ǭȩI�s���쫬�ŧi */ 

int main()
{
    struct product book;
    
    printf("�ѦW:");
    gets(book.name);
    printf("���:");
    scanf("%d",&book.price);
    printf("�ƶq:");
    scanf("%d",&book.number);
    printf("-----------------------------------------\n");
    printf("�ѦW : %s\n", book.name);
    printf("��� = %d\t", book.price);
    printf("�ƶq = %d\n", book.number);
    printf("�q�ʪ��B = %d\n",calculate(book)); /* �I�s�ɡA�����N���c�ܼƶǤJ��ƧY�i */   
    
    system("pause");
    return 0;
}
int calculate(struct product inbook)
{
    int money;
    money = inbook.price*inbook.number;/* �p��q�ʪ��B */ 
    return money;
}


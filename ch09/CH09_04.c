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
     struct book *ptr;    /* �ŧi���c���� */
     
     printf("�Ĥ@���Ѫ��ѦW�G");
     scanf("%s",m1.title);
     printf("���y�w���G");
     scanf("%d", &m1.price);
     
     printf("�ĤG���Ѫ��ѦW�G");
     scanf("%s",m2.title);
     printf("���y�w���G");
     scanf("%d", &m2.price);
     printf("---------------------------------\n");
     ptr = &m1; /* ��l�ƫ��� */
     printf("�Ĥ@�ص��c���Цs���覡�G\n");
     printf("�ѦW�G");
     printf("%s",ptr->title);/* �Ĥ@�ص��c���Цs���覡 */ 
     printf("\t���y�w���G");
     printf("%d",ptr->price);

     ptr = &m2; /* ��l�ƫ��� */
     printf("\n�ĤG�ص��c���Цs���覡�G\n");
     printf("�ѦW�G");
     printf("%s",(*ptr).title);/* �ĤG�ص��c���Цs���覡 */ 
     printf("\t���y�w���G");
     printf("%d",(*ptr).price);
     printf("\n");

     system("pause");
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[15];
        int score;
    };/* �ŧistudent ���c */ 
    struct student class1[5] = { {"�P�p��", 90},
                                 {"�{�p�K", 85},
                                 {"�d����", 88},
                                 {"�i�p��", 75},
                                 {"�L�C�C", 80} };/* �]�w5�Ӧ�������l�� */
    int i;
    for(i = 0; i < 5; i++)
        printf("�m�W�G%s\t���Z�G%d\n", class1[i].name, class1[i].score);
     /* �C�Lstudent���c�}�C���������� */ 
     printf("---------�H�U�ϥΫ��б`�ƹB��Ӧs��student���c����---------\n");
     for(i = 0; i < 5; i++)	   
     printf("�m�W�G%s\t���Z�G%d\n", (class1+i)->name, (class1+i)->score);
     /* �i�H�ϥΫ��Ъ��[���Ӧs��student���c����*/ 
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10],name1[10],name2[10];
    
    printf("�п�J�@�Ӧr��:");
    scanf("%s",name);/* ��J�@�Ӧr��,name���e���Υ[&�� */ 
    printf("%s\n",name);
    
    printf("�ЦA��J��Ӧr��:");
    scanf("%s%s",name1,name2);/* ��J��Ӧr��,�H�ť���ӰϹj*/ 
    printf("%s  %s\n",name1,name2);
    
    system("pause");
    return 0;
}

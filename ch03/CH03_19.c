#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first,last;
    
    printf("�п�J9�ӼƦr:");
    scanf("%4d%5d",&first,&last);
    /* �N�o�Ӿ�Ƥ����|��ƻP�����*/ 
    printf("�Ĥ@�ӼƦr��:%d\n",first);
    printf("�ĤG�ӼƦr��:%d\n",last);    
    printf("��̪��M��:%d\n",first+last); /* �p���̪��Ʀr�M */ 
    
    system("pause");
    return 0;
}

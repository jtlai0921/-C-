#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, MAX= 0, input, i;

    printf("�ǳƿ�J�Ʀr���ӼơG");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
            printf(">");
            scanf("%d", &input);
            if(MAX<input)
            MAX=input;
    } /* �Q��for�j��ӿ�J�P�M��̤j�� */ 
        printf("�o�ǼƦr�����̤j�Ȭ��G%d\n",MAX);
    
    system("pause");
    return 0;
}

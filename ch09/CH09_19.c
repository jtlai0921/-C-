#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum fruit { APPLE = 1, BANANA, WATERMELON, GRAPE };
    /* �w�q�C�|���A fruit */
    char *fruit_name[] = { "apple", "banana",
                           "watermelon", "grape"};
    int i;
    for(i = APPLE; i <= GRAPE; i++)
        printf("�� %d ���G�W�١G %s\n", i,fruit_name[i-1]);
    /*��1�ӦC�|�`��apple���w�]�Ȭ�1,�̦����W*/
    system("pause");
    return 0;
}

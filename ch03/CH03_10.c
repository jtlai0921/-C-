#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=1234;
    float fo=12.3478f;
    
    printf("no=%d\n",no);
    printf("no=%3.6d\n",no);/* ��X���,�B��e�]�w��3,��׳]�w��.6 */ 
    printf("no=%5.2d\n",no);/* ��X���,�B��e�]�w��5,��׳]�w��.2 */
    printf("-----------------------------------\n");
    printf("fo=%f\n",fo); 
    printf("fo=%6.2f\n",fo);/* ��X�B�I��,�B��e�]�w��6,��׳]�w��.2 */ 
    printf("fo=%7.5f\n",fo);/* ��X�B�I��,�B��e�]�w��7,��׳]�w��.5*/ 
    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=1234;
    
    printf("no=%*d\n",1,no);
    printf("no=%*d\n",6,no);/* ��e�]�w��6 */ 
    printf("no=%*d\n",8,no);/* ��e�]�w��8 */ 
    printf("no=%*d\n",2,no);/* ��e�]�w�Ȥp��쥻����ܦr���� */ 
    
    system("pause");
    return 0;
}

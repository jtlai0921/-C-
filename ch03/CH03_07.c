#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no=1234;
    
    printf("no=%d\n",no);
    printf("no=%.6d\n",no);/* ��׳]�w��.6 */ 
    printf("no=%.8d\n",no);/* ��׳]�w��.8 */ 
    printf("no=%.2d\n",no);/* ��׳]�w�Ȥp��쥻����ܦr���� */ 
    
    system("pause");
    return 0;
}

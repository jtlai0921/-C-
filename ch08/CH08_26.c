#include <stdio.h>
#include <stdlib.h>
#define NEWLINE putchar('\n') /* �w�q�������O */ 
#define DIVIDE printf("********\n") /* �w�q�������O */ 

int main()
 {
     
     printf("���D��r\n");
     DIVIDE;
     #undef DIVIDE /* �Ѱ����� */ 
     NEWLINE;
    
    system("pause");
    return 0;
}

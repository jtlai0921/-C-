#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iVal=345;/* �ŧiiVal��ƭ� */ 
    
    /* �X�г]�w�r���ܽd */
    printf("%%d  �榡��X���G=%d\n",iVal);
    printf("+6d �榡��X���G=%+6d\n",iVal);
    printf("-6d �榡��X���G=%-6d\n",iVal);
    printf("+#6o�榡��X���G=%+#6o\n",iVal);
    printf("+#6x�榡��X���G=%+#6x\n",iVal);
    printf("06d �榡��X���G=%06d\n\n",iVal);
    
    system("pause");
    return 0;
}

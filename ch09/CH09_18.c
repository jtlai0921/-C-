#include <stdio.h>
#include <stdlib.h>

typedef int INTEGER;/* ��int�w�q��INTEGER */ 
typedef char* STRING;/* ��char*�w�q��STRING */ 

int main()
{    
     INTEGER amount;/* �ŧiamount�O INTEGER���A */ 
     STRING s1="�ͤ�ּ�";/* �ŧis1�OSTRING���A */ 
     amount=9999;
     printf("%s %d\n",s1,amount);
     
     system("pause");
     return 0;
}

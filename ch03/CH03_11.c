#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Num_1=1234;    /* �w�q����ܼ� Num_1 */
     float Num_2=123.45;  /* �w�q�B�I���ܼ� Num_2 */
     
     printf("���Num_1(%%d)  :%d\n", Num_1);  
     printf("���Num_1(%%6d) :%6d\n", Num_1); 
       /* ��X���,�B��e�]�w��6 */   
     printf("���Num_1(%%+6d):%+6d\n", Num_1);  
      /* ��X���,�B��e�]�w��6,�X�г]�w��+ */  
     printf("���Num_1(%%-6d):%-6d\n", Num_1);  
      /* ��X���,�B��e�]�w��6,�X�г]�w��- */    
     printf("-----------------------------------\n");
     printf("���Num_2(%%f)    :%f\n", Num_2);     
     printf("���Num_2(%%6.2f) :%6.2f\n", Num_2);   
     /* ��X�B�I��,�B��e�]�w��6,��׳]�w��.2 */     
     printf("���Num_2(%%+6.2f):%+6.2f\n", Num_2); 
      /* ��X�B�I��,�B��e�]�w��6,��׳]�w��.2,�X�г]�w��+ */   
     printf("���Num_2(%%-6.2f):%-6.2f\n", Num_2);    
       /* ��X�B�I��,�B��e�]�w��6,��׳]�w��.2,�X�г]�w��- */ 
     
     system("pause");
     return 0;
}

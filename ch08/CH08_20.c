#include <stdio.h>  
#include <stdlib.h> 
 
void Add_Num();    /* �إ߲֥[�ܼƭȪ���ƫŧi  */

int main() 
{  
    int count;  
     for (count=0; count<5; count++)  
     Add_Num();	/* �z�Lfor�j������ƩI�s5�� */ 
     
     system("pause");
     return 0;
}  

void Add_Num() 
{  
     auto int auto_Num=1;	/* �ŧi�ê�l�Ʀ۰��ܼ� */
     static int static_Num=1;	/* �ŧi�ê�l���R�A�ܼ� */
     printf("�۰��ܼ� auto_Num ���Ȭ��G%d\n",auto_Num);  
     printf("�R�A�ܼ� static_Num ���Ȭ��G%d\n",static_Num);  
     	
     auto_Num++;	   /* �Nauto�ܼƥ[ 1 */ 
     static_Num++;  /* �Nstatic�ܼƥ[ 1 */ 
}

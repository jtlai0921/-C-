#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,n;
    printf("�п�J�@�ӼƦr�G");
    scanf("%d", &n);
    printf("%d���Ҧ��]�Ƭ�:",n);
   
    while(a<=n)      /*�w�qwhile�j��,�B�]�w����a<=n*/
    {
       if(n%a==0)    /*��n����Qa�㰣��~�ha�N�On���]��*/ 
       {             /*�h����if�����ԭz*/
         printf("%d ",a);    
		 if(n!=a)printf(",");
       }
       a++;   /*a�Ȼ��W1*/
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}


#include <stdio.h> 
#include <stdlib.h>

int main()
{
   int i,arr[5]={12,16,5,5,32};
   
   for(i=0;i<5;i++)
     printf("&arr[%d]=%p  arr(+%d)=%p\n",i,&arr[i],i,arr+i);  
     /* ��ؤ覡��X�}�Carr�C�@�Ӥ�������} */
   printf("---------------------------------------\n");
   for(i=0;i<5;i++)
     printf("*(&arr[%d])=%d \t *arr(+%d)=%d\n",i,*(&arr[i]),i,*(arr+i)); 
      /* ��ؤ覡��X�X�}�Carr�C�@�Ӥ������� */
     
   system("pause");
   return 0;
}


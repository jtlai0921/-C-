#include <stdio.h>
#include <stdlib.h>

int main()
{
 
 int arr[10]={1,2,3,4,5,6,7,8,9,10};
 int i,sum=0;
  
  for (i=0;i<10;i++)
  {
      if(i==0)
       printf(" ");  /*�p�Gi����0�N��X�Ů�*/
      else	
       printf("+");     /*�p�Gi������0�N��X+��*/
       printf("%d",i+1);
       sum = sum + arr[i];   /*�N�}�C�����C�Ӥ����֥[��sum*/
       printf(" = %d\n",sum);  /*��X�֥[�᪺���G */
  }    
      system("pause");
      return 0; 
}

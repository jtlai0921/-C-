#include <stdio.h>
#include <stdlib.h>
#define n 6

void Multiple(int arr[]);		/* ���Multiple()���쫬 */

int main()
{
   int i,array[n]={ 1,2,3,4,5,6 };
   
   printf("�I�sMultiple()�e,�}�C�����e��: ");   
   for(i=0;i<n;i++)	/* �L�X�}�C���e */
      printf("%d ",array[i]);
   printf("\n");
   Multiple(array); 			/* �I�s���Multiple2() */
   printf("�I�sMultiple()��,�}�C�����e��: "); 
   for(i=0;i<n;i++)	/* �L�X�}�C���e */
      printf("%d ",array[i]);
   printf("\n");
       
   system("pause");
   return 0;
}

void Multiple(int arr[])
{
   int i;
   for(i=0;i<n;i++)	
      arr[i]*=10;
}


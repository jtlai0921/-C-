#include <stdio.h>
#include <stdlib.h>
#define n 6

void Multiple(int arr[]);		/* 函數Multiple()的原型 */

int main()
{
   int i,array[n]={ 1,2,3,4,5,6 };
   
   printf("呼叫Multiple()前,陣列的內容為: ");   
   for(i=0;i<n;i++)	/* 印出陣列內容 */
      printf("%d ",array[i]);
   printf("\n");
   Multiple(array); 			/* 呼叫函數Multiple2() */
   printf("呼叫Multiple()後,陣列的內容為: "); 
   for(i=0;i<n;i++)	/* 印出陣列內容 */
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


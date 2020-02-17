#include <stdio.h>
#include <stdlib.h>

int main()
{
 
 int arr[10]={1,2,3,4,5,6,7,8,9,10};
 int i,sum=0;
  
  for (i=0;i<10;i++)
  {
      if(i==0)
       printf(" ");  /*如果i等於0就輸出空格*/
      else	
       printf("+");     /*如果i不等於0就輸出+號*/
       printf("%d",i+1);
       sum = sum + arr[i];   /*將陣列中的每個元素累加到sum*/
       printf(" = %d\n",sum);  /*輸出累加後的結果 */
  }    
      system("pause");
      return 0; 
}

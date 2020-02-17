/*¥H±_ª¬for°j°é­pºân! */
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    int i,j,sum = 1;
     
     for(i=0;i<=10;i++)	 /* 0~10¶¥¼h */
     {  
     for(j=i;j>0;j--) /* n!=n*(n-1)*(n-2)*...*1 */
      sum *= j;		 /* sum=sum*j */
      printf("%d!=%3d\n",i,sum);
      sum= 1;
     }
      
      system("pause");
      return 0;
}

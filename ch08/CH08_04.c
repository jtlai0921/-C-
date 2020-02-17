#include <stdio.h>  
#include <stdlib.h>  

int Common_Divisor(); /* ㄧ计 */

int main()  
{  
    int CDivisor;  
    CDivisor=Common_Divisor(); /* ㄧ计㊣ */
    printf("程そ计%d\n",CDivisor);  
    
    system("pause");
    return 0;
 }  
int Common_Divisor()  
 {  
   int Num1,Num2,Temp;  
   printf("叫块ㄢ计\n");  
   printf("计 1");  
   scanf("%d",&Num1); 
   printf("计 2");  
   scanf("%d:",&Num2);  
   printf("%d の %d",Num1,Num2);  
   
   while (Num2 != 0)  /* ノ劣锣埃猭璸衡程そ计*/
   	{  
     Temp=Num1 % Num2;  
   	 Num1 = Num2;  
	 Num2 = Temp;  
   	}  
    
    return (Num1); 
  }

#include <stdio.h>  
#include <stdlib.h>  

int Common_Divisor(); /* ��ƭ쫬�ŧi */

int main()  
{  
    int CDivisor;  
    CDivisor=Common_Divisor(); /* ��ƩI�s */
    printf("���̤j���]�Ƭ��G%d\n",CDivisor);  
    
    system("pause");
    return 0;
 }  
int Common_Divisor()  
 {  
   int Num1,Num2,Temp;  
   printf("�п�J��Ӽƭ�\n");  
   printf("�ƭ� 1�G");  
   scanf("%d",&Num1); 
   printf("�ƭ� 2�G");  
   scanf("%d:",&Num2);  
   printf("%d �� %d",Num1,Num2);  
   
   while (Num2 != 0)  /* �Q������۰��k�p��̤j���]��*/
   	{  
     Temp=Num1 % Num2;  
   	 Num1 = Num2;  
	 Num2 = Temp;  
   	}  
    
    return (Num1); 
  }

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int value;
    
    printf("�Х��N��J�@�Ӿ�ơG");
    scanf("%d", &value);/* ��J�@�Ӿ�� */ 

  if(value%2==0 || value%3==0)/* �P�_�O�_��2��3������ */ 
   if(value%6!=0)
   printf("�ŦX�ҭn������\n");
   else
   printf("���ŦX�ҭn������\n");/* ��6������ */  
  else
   printf("���ŦX�ҭn������\n");  

   system("pause");
   return 0;
}

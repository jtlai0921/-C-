#include<stdio.h>
#include<stdlib.h>

int salary=17500;/* �ŧisalary�������ܼ� */ 

int main()
{
  
  printf("salary=%d\n",salary);
  {
   int salary=22000;/* �b���ŧisalary���϶��ܼ� */ 
   printf("salary=%d\n",salary);
  }
  printf("salary=%d\n",salary);
   
  system("pause");
  return 0;
}


#include<stdio.h>
#include<stdlib.h>

int main()
{
  const int salary=25000;/* �ŧisalary���`�� */ 
  
  printf("salary=%d\n",salary);
  {
   const int salary=17500;/* �b���{���϶����ŧisalary���`�� */ 
   printf("salary=%d\n",salary);
  }
  
  printf("salary=%d\n",salary);
    
   system("pause");
   return 0;
}


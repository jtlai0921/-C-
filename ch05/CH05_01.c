#include<stdio.h>
#include<stdlib.h>

int main()
{
   
  int Chi,Eng,Math;
  float Total,Average;
  
  printf("�п�J��� �^�� �ƾǦ��Z:");
  scanf("%d%d%d",&Chi,&Eng,&Math);
  
  Total=Chi+Eng+Math;/*�p���̦��Z�`�M*/
  Average=Total/3; /*�p���̥������Z*/
  printf("======================================\n");
  printf("���Z�`��=%.2f �������Z=%.2f\n",Total,Average);
  
  system("pause");
  return 0;
} 

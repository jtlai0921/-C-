#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,arr[5];/*�ŧi��ư}�C,�å��P�B�]��*/ 
     
     arr[0]=1;
     arr[1]=2;
     arr[2]=3;/* arr[3]�Parr[4]�å��]�w��� */ 
     
     for(i=0;i<5;i++)
      printf("arr[%d]=%d\n",i,arr[i]);/* ��X�Ҧ������� */ 
     
     system("pause");
     return 0;
}

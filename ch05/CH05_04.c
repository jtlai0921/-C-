#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Select, Result=77;  /* �w�q����ܼ� Select, Result */
    /*Result �x�s����*/ 
    printf("�q�q���߼ֳz���X(2���):\n");
    scanf("%d",&Select);
    
    if (Select-Result)  /*if�h�����ԭz*/
    {
     printf("�q���F....\n");
     printf("���׬O%d\n",Result); 
    }
     
     system("pause");
     return 0;
}

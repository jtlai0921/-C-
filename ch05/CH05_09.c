#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    long sum=0;/* �ŧi������� */ 
    
    printf("�п�J���@���:"); 
    scanf("%d",&n);
    
    if(n>=1 || n<=100)/* �����J�d�� */ 
    {
    for(i=0;i<n;i++)
     sum+=i*i; /* 1*1+2*2+3*3+..n*n */ 
     printf("1*1+2*2+3*3+...+%d*%d=%d\n",n,n,sum);
    }
    else 
     printf("��J�Ʀr�W�X�d��F!\n"); 
      
    system("pause");
    return 0; 
} 


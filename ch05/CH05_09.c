#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    long sum=0;/* 宣告為長整數 */ 
    
    printf("請輸入任一整數:"); 
    scanf("%d",&n);
    
    if(n>=1 || n<=100)/* 控制輸入範圍 */ 
    {
    for(i=0;i<n;i++)
     sum+=i*i; /* 1*1+2*2+3*3+..n*n */ 
     printf("1*1+2*2+3*3+...+%d*%d=%d\n",n,n,sum);
    }
    else 
     printf("輸入數字超出範圍了!\n"); 
      
    system("pause");
    return 0; 
} 


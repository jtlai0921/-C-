#include <stdio.h> 
#include <stdlib.h>

int gcd_loop(int, int);/*�j�骩��*/ 
int gcd_rec(int, int);/*���j����*/ 

int main() 
{ 
    int m = 0;
    int n = 0; 

    printf("��J��ơG"); 
	scanf("%d %d",&m,&n);/*��J��Ӿ��*/ 
	printf("�j�骩���̤j���]�Ƭ��G%d\n",gcd_loop(m,n));
	printf("���j�����̤j���]�Ƭ��G%d\n",gcd_rec(m,n));
	
    system("PAUSE");
    return 0; 
} 

int gcd_rec(int m, int n){ 
    if(n == 0) 
        return m; 
    else 
        return gcd_rec(n, m%n);/*�D��̾l�ƭȦA���j�B��*/ 
}

int gcd_loop(int m, int n) 
{ 
    int r = 0; 
    while(n!= 0){ 
        r=m%n; /*�D��̾l�ƭ�*/ 
        m=n; 
        n=r; 
    } 
    return m; 
}

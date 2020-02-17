#include <stdio.h> 
#include <stdlib.h>

int gcd_loop(int, int);/*迴圈版本*/ 
int gcd_rec(int, int);/*遞迴版本*/ 

int main() 
{ 
    int m = 0;
    int n = 0; 

    printf("輸入兩數："); 
	scanf("%d %d",&m,&n);/*輸入兩個整數*/ 
	printf("迴圈版本最大公因數為：%d\n",gcd_loop(m,n));
	printf("遞迴版本最大公因數為：%d\n",gcd_rec(m,n));
	
    system("PAUSE");
    return 0; 
} 

int gcd_rec(int m, int n){ 
    if(n == 0) 
        return m; 
    else 
        return gcd_rec(n, m%n);/*求兩者餘數值再遞迴運算*/ 
}

int gcd_loop(int m, int n) 
{ 
    int r = 0; 
    while(n!= 0){ 
        r=m%n; /*求兩者餘數值*/ 
        m=n; 
        n=r; 
    } 
    return m; 
}

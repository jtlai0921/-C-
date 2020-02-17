#include <stdio.h>
#include <stdlib.h>

int ndegree_rec(int);/*遞迴函數*/ 
int ndegree_loop(int);/*迴圈函數*/ 

int main()
{ 	
    int n;
    printf("請輸入n值：");
    scanf("%d",&n);/*輸入所求n!的n值*/ 
    printf("%d!之迴圈版為%d，遞迴版為%d\n",n,ndegree_loop(n),ndegree_rec(n));
    
    system("PAUSE");
    return 0;
}

int ndegree_loop(int n)
{
  int result=1;
  do{
      result*=n;
      n--;
    }while(n>0);/*利用do while迴來控制*/ 
    
    return result;/*回傳結果值*/ 
}	

int ndegree_rec(int n)
{
    if(n==1)
     return 1;/* 跳出反覆執行過程中的缺口 */	
    else	
     return n*ndegree_rec(n-1);/* 反覆執行的過程 */
}

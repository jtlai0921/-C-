#include <stdio.h>
#include <stdlib.h>

int ndegree_rec(int);/*���j���*/ 
int ndegree_loop(int);/*�j����*/ 

int main()
{ 	
    int n;
    printf("�п�Jn�ȡG");
    scanf("%d",&n);/*��J�ҨDn!��n��*/ 
    printf("%d!���j�骩��%d�A���j����%d\n",n,ndegree_loop(n),ndegree_rec(n));
    
    system("PAUSE");
    return 0;
}

int ndegree_loop(int n)
{
  int result=1;
  do{
      result*=n;
      n--;
    }while(n>0);/*�Q��do while�j�ӱ���*/ 
    
    return result;/*�^�ǵ��G��*/ 
}	

int ndegree_rec(int n)
{
    if(n==1)
     return 1;/* ���X���а���L�{�����ʤf */	
    else	
     return n*ndegree_rec(n-1);/* ���а��檺�L�{ */
}

#include <stdio.h>
#include <stdlib.h>
int* add_value();  /* 傳回指標值 */ 

int main()
{
     int *ptr;
     ptr = add_value();
     /*呼叫add_value ()函數，並傳值給ptr指標變數*/
     printf( "*ptr=%d\n", *ptr );
     /*輸出ptr指標變數的內容*/
     system("pause");
     return 0;
}
 
 /* 讓使用者輸入兩個整數,並相加 */
 /* 傳回指標值       */
int* add_value ()
{
     int *x;
     int input,input1;
     x = &input;
     
     printf( "請輸入兩個整數：" );
     scanf( "%d%d",&input,&input1 );
     /*輸入input與input1變數的值*/
     input=input+input1;/*兩數相加*/ 
 
     return x;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    

    short int no1=200; /* �ŧi���u��� */ 
    int  no2=200;
    long int no3=200;
    
    printf("%d%����%d�줸��\n",no1,sizeof(no1));  /* �H10�i���X */ 
    printf("%d%����%d�줸��\n",no2,sizeof(no2));  /* �H10�i���X */
    printf("%d%����%d�줸��\n",no3,sizeof(no3));  /* �H10�i���X */
      
    system("pause");
    return 0;
}

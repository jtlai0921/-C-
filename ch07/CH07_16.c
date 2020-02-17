#include <stdio.h>
#include <stdlib.h> 

 int main()
 {
     char *name[5] =  { "John", "David", "Kelvin", "Steve","Wilson" };
     int i;
 
     for ( i = 0; i < 5; i++ )
        printf( "name[%d] = %s\n", i, name[i]);
        /* 輸出指標name[i]所指向的字串 */ 
     
     system("pause");
     return 0;
 }

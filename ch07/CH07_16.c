#include <stdio.h>
#include <stdlib.h> 

 int main()
 {
     char *name[5] =  { "John", "David", "Kelvin", "Steve","Wilson" };
     int i;
 
     for ( i = 0; i < 5; i++ )
        printf( "name[%d] = %s\n", i, name[i]);
        /* ��X����name[i]�ҫ��V���r�� */ 
     
     system("pause");
     return 0;
 }

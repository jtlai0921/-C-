#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name[5] = { "John", "David", "Kelvin", "Steve","Wilson" };/* 一維指標陣列 */ 
    char name1[][10] = { "John", "David", "Kelvin", "Steve","Wilson" };/* 二維字串陣列  */ 
    int i;
    
    for ( i = 0; i < 5; i++ )
    {
        printf( "name[%d] = \"%s\"\t",i,name[i] );
        printf( "所佔位址：%p \n", name[i]); /* 列印name[i]出所佔位址 */   
    }
    printf("--------------------------------------------\n");
    for ( i = 0; i < 5; i++ )
    {
        printf( "name1[%d] = \"%s\"\t",i,name1[i] );
        printf( "所佔位址：%p \n",&name1[i][0]);/* 列印name1[i]出所佔位址 */ 
     }    
    system("pause");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 110;
    char ch = 'A';

    puts( "變數名稱  變數值  記憶體位址" );
    puts( "-----------------------------" );
    printf( "num\t   %d\t   %p\n", num, &num );
    /* 輸出num的值及位址 */ 
    printf( "ch\t   %c\t   %p\n", ch, &ch );
    /* 輸出ch的值及位址 */ 
    system("pause");
    return 0;
}

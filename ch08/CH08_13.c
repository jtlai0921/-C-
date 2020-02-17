#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])/* ㏑ま计肚患 */ 
{
    int i;
    if( argc == 1 )/* Τ祘Α嘿 */ 
        printf( "ゼ﹚把计" );
    else
    {
        printf("┮块把计\n");
        for( i = 0; i < argc; i++ )
            puts(argv[i]);/*  argv皚ず甧 */ 
    }
    system("pause");
    return 0;
}

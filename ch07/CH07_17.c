#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name[5] = { "John", "David", "Kelvin", "Steve","Wilson" };/* �@�����а}�C */ 
    char name1[][10] = { "John", "David", "Kelvin", "Steve","Wilson" };/* �G���r��}�C  */ 
    int i;
    
    for ( i = 0; i < 5; i++ )
    {
        printf( "name[%d] = \"%s\"\t",i,name[i] );
        printf( "�Ҧ���}�G%p \n", name[i]); /* �C�Lname[i]�X�Ҧ���} */   
    }
    printf("--------------------------------------------\n");
    for ( i = 0; i < 5; i++ )
    {
        printf( "name1[%d] = \"%s\"\t",i,name1[i] );
        printf( "�Ҧ���}�G%p \n",&name1[i][0]);/* �C�Lname1[i]�X�Ҧ���} */ 
     }    
    system("pause");
    return 0;
}


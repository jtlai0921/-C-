#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]="Applepine";
    
    printf("name=%s\n",name);
    printf("name=%.2s\n",name);/* ��׳]�w��.2 */ 
    printf("name=%.5s\n",name);/* ��׳]�w��.5 */ 
    printf("name=%.10s\n",name);/* ��׳]�w�Ȥj��쥻���r���� */ 
    
    system("pause");
    return 0;
}

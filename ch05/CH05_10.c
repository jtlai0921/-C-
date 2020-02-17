#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, MAX= 0, input, i;

    printf("非称块计计");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
            printf(">");
            scanf("%d", &input);
            if(MAX<input)
            MAX=input;
    } /* ノfor癹伴ㄓ块籔碝т程 */ 
        printf("硂ㄇ计い程%d\n",MAX);
    
    system("pause");
    return 0;
}

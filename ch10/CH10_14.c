#include <stdio.h>
#include <stdlib.h> 

 int main()
 {
     FILE *fptr;
     char str[20];
 
 
     if ((fptr = fopen("sample.txt", "r")) == NULL)
         printf("�ɮ׶}�ҥ��ѡI");
     else
     {
        fgets(str, 5, fptr);
        printf("%s\n", str);
        fseek(fptr, 8, SEEK_SET);/* SEEK_SET�`�ƪ����� */ 
        printf("%c\n", fgetc(fptr));
        fseek(fptr, -4, SEEK_CUR);/* SEEK_CUR�`�ƪ����� */ 
        fgets(str, 3, fptr);
        printf("%s\n", str);
        fseek(fptr, -5, SEEK_END);/* SEEK_CUR�`�ƪ����� */ 
        fgets(str, 6, fptr);
        printf("%s\n", str);
        fclose(fptr);
 
       fclose(fptr);
     }
    
    system("pause");
    return 0;
 }

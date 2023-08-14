#include<stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("C.txt","w");
    scanf("%c",&ch);
    fputc(ch,ptr);
    printf("Record save");
    fclose(ptr);
    return 0;
}

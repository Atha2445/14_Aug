#include<stdio.h>
main()
{
    char ch;
    FILE *ptr;
    ptr=fopen("C.txt","w");
    printf("Enter Text\n");
    while(ch !='.'){
        ch = getche();
        fputc(ch,ptr);
    }
    printf("Saved");
    fclose(ptr);
    return 0;
    }
feof

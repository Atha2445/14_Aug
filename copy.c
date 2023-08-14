#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("file.c","w");
    ch=getche();
    while(ch!='.'){
           fputc(ch,ptr);
            ch=getche();

    }

    fclose(ptr);
ptr = fopen("Base.txt","r");
ptr1=
    return 0;
}

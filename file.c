#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("C.txt","w");
    ch=getche();
    while(ch!='.'){
            if (ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
        fputc(ch,ptr);

            }
            ch=getche();

    }
    printf("Done");
    fclose(ptr);

    return 0;
}

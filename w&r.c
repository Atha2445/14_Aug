#include<stdio.h>
#include<conio.h>

int main()
{
    char ch,ch1;
    FILE *ptr;
    ptr=fopen("Ath.txt","w");
    printf("Enet Text");
    while(ch != '.'){
        ch = getche();
        fputc(ch,ptr);

    }
printf("Done");
fclose(ptr);

            //File Opening
ptr = fopen("Ath.txt","r");
printf("")
}

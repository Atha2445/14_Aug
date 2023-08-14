#include<stdio.h>
struct student{
char name[32];
int r;
}s[20];
int main()
{
    FILE *fp;
    int i,n;
    printf("\nEnter total no of student\t");
scanf("%d",&n);
fp=fopen("astruct.txt","w");
for(i=0;i<n;i++){
    printf("Enter name and rollno\n");
    scanf("%s%d",s[i].name,&s[i].r);

}
fwrite(&s,sizeof(s),1,fp);
fclose(fp);
fp=fopen("astruct.txt","r");
printf("\nData in file is:\n");
fread(&s,sizeof(s),1,fp);
for(i=0;i<n;i++){
    printf("\n%s",s[i].name);
    printf("\t%d",s[i].r);
}
fclose(fp);
return 0;

}


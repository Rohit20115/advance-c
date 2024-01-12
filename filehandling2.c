#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    FILE *fp,*fp1;
    char ch;
    fp = fopen("Rohit.txt","w");
    printf("Data input\n");
    while((ch=getchar()!=EOF))
    {
        putc(ch,fp);

    }
    fclose(fp);
    
    fp=fopen("Rohit.txt","r");
    fp1=fopen("Rohit.txt","w");
    while((ch=fgetc(fp)!=EOF));
    {
        fputc(ch,fp1);
    }
    fclose(fp);
    fclose(fp1);
}
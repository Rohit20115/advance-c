#include<stdio.h>
main(argc,argv)
int argc;
char *argv[];
{

        int i;
        printf("\n total count = %d",argv);
        for(i=0;i<argc;i++)
        {

                printf("\n %s",argv);

        }

}
#include<stdio.h>
main()
{
        int x,*p,y;
        x=10;
        p=&x;
        printf("\n x=%d",*p);

        y=*p;
        *p=20;
        printf("\n y=%d",*p);

}
#include<stdio.h>
main()
{

        int x,*p1,**p2;
        x=100;
        p1=100;
        p1=&x;
        p2=&p1;

        printf("\n%d",x);
        printf("\n%d",*p1);
        printf("\n%d",**p2);
        
}
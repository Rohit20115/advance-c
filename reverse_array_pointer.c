#include<stdio.h>
main()
{
    int a[]={1,2,3,4,5};
    int *ptr,i;
    ptr=&a[0];
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);

    }
    ptr=&a[4];
    for(i=0;i<5;i++,ptr--)
    {
        printf("%d\t",*ptr);
    }
}
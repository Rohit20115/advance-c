#include<stdio.h>
main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);

    }
    for(i=4;i>=0;i--)
    {
        printf("\n%d",arr[i]);
    }
}
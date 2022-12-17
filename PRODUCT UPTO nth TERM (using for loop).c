#include<stdio.h>
main()
{
    int i,a,v=1;
    printf("enter number get product of nth\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        v=v*i;
    }
    printf("product upto nth term=%d",v);
    getch();
}    
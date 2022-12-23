#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,f=1;
    printf("enter number to find factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=(f*i);
    }
    printf("factorial=%d\n",f);
    getch();
}
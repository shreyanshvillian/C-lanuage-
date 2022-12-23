#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,rem,y=0;
    printf("enter number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        rem=(n%10);
        y=(10*y+rem);
        n=n/10;
    }
    printf("reverse=%d",y);
    getch();
}
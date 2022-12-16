#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    printf("input a number\n");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }
    getch();
}
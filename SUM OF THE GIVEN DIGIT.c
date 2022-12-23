#include<stdio.h>
#include<conio.h>
main()
{
    int i,y=1,rem,n;
    printf("enter number to find sum of the given digit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        rem=(n%10);
        y =(y+rem);
        n= n/10;
    }
    printf("sum of digit=%d\n",y);
    getch();
}
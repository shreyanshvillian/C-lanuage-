#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,f=0;
    printf("enter number to check whether the given number is prime or not\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    { if (n%i==0)
    {f=1;
    break;}
    }
    if (f==1)
    printf("not a prime no");
    else
    printf("prime no");
    getch();
}
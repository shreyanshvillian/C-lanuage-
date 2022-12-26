#include<stdio.h>
#include<conio.h>
int sum(int,int);
main()
{ int a,b,c;
printf("enter number\n");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("sum is =%d",c);
getch();
}

int sum(int m,int n)
{
    int p;
p=m+n;
return p;
}


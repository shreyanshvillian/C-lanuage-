#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
main()
{
    int i,c,a,b;
    printf(" enter nuber\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum %d",c);
    getch();
}
int sum(int m, int n)
{ int k;
k=m+n;
return k;
}
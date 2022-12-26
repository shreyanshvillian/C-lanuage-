#include<stdio.h>
#include<conio.h>
int multi(int,int);
main()
{ int a,b,c;
printf("enter number\n");
scanf("%d%d",&a,&b);
c=multi(a,b);
printf("multi=%d",c);
getch();
}
 int multi(int m,int n)
 { int k;
 k=m*n;
 return k;
 }
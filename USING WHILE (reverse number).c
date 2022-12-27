#include<stdio.h>
#include<conio.h>
main()
{ int n,i,rem,y=0;
printf("enter number to reverse\n");
scanf("%d",&n);
while (n!=0){
rem=n%10;
y=10*y+rem;
n=n/10;
}
printf("reverse=%d",y);
getch();
}

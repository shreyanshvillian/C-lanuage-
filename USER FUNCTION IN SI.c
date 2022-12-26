#include<stdio.h>
#include<conio.h>
float si(float,float,float);
main()
{
float p,r,t,u;
printf("enter p,r,t\n");
scanf("%f%f%f",&p,&r,&t);
u=si(p,r,t);
printf("si=%f",u);
getch();
}
 float si(float m,float n,float k)
{ float f;
 f=m*n*k/100;
 return f;
}
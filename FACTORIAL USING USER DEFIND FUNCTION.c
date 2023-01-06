#include<stdio.h>
#include<conio.h>
int fact(int m);
main()
{
    int n,c;
    printf("enetr term\n");
    scanf("%d",&n);
    c=fact(n);
    printf("factorial=%d",c);
    getch();
}
int fact(int n)
{ int i,f=1;
for(i=1;i<=n;i++){
    f=f*i;
}
return f;
}
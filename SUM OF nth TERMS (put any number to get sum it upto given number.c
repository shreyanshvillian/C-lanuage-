#include<stdio.h>
main() 
{ int i,n,v=0;
    printf("enter digit to get sum of nth\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    v=(i+v);
    }
    printf("sum of nth=%d",v);
    getch();
}
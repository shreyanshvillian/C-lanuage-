#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3],b[3][3],r,c,f=0;
    printf("enetr elements of 1 matrix\t");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&a[r][c]);
        }
    }
    printf("enter elements of 2 matrix\t");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&b[r][c]);
        }
    }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
        if (a[r][c]!=b[r][c])
        {
            f=1;
            break;
        }
        }}
    if (f=0)
    printf("equal");
    else
    printf("not equal");
    getch();
}

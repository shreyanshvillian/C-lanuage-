#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3],b[3][3],r,c,k[3][3];
    printf("enter elements for 1 matrix");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&a[r][c]);
        }
    }
    printf("enter elements for 2 matrix");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&b[r][c]);
        }
    }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
    k[r][c]=(a[r][c]+b[r][c]);
    printf("%d\t",k[r][c]);}
    printf("\n");
    }
    getch();
}
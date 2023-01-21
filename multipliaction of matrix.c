#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3],b[3][3],k[3][3],r,c,l;
    printf("enter elements of 1 matrix");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&a[r][c]);
        }
    }
    printf("enter elements of 2 matrix");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&b[r][c]);
        }
    }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            k[r][c]=a[r][l]*b[l][c];
            printf("%d",k[r][c]);
        }
        printf("\n");
    }
    getch();
}
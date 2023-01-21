#include<stdio.h>
#include<conio.h>
main()
{ int a[2][2],c,r,k[2][2];
printf("enter elements of matix\n");
for(c=0;c<2;c++){
    for(r=0;r<2;r++){
        scanf("%d",&a[r][c]);
    }
} printf("cube of elements of matrix are\n");
for(r=0;r<2;r++){
    for(c=0;c<2;c++){
        k[r][c]=a[r][c]*a[r][c]*a[r][c];
       
        printf("%d\t",k[r][c]);
    }
    printf("\n");
}  
getch();
}
#include<stdio.h>
#include<conio.h>
main()
{
    int a[2][2],r,c,flag,even,odd;
    printf("enter elemnts of 1 matrix");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
    if (a[r][c]%2==0)
    printf("even=%d\n",a[r][c]);
    else
    printf("odd=%d\n",a[r][c]);
}}
    getch();

}
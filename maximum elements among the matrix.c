#include<stdio.h>
#include<conio.h>
main()
{ int a[2][2],c,r,max=0;
printf("enter elements of matrix\n");
for(r=0;r<2;r++){
    for(c=0;c<2;c++){
    scanf("%d",&a[r][c]);
    }}
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
    if ( a[r][c]> max)
    {
        max=a[r][c];
    }}}
    printf("maximun no.=%d",max);
    getch();
    
    
}

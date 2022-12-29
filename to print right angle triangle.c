#include<stdio.h>
#include<conio.h>
main()
{int c,r;
for(r=1;r<=10;r++){
    for(c=1;c<=10;c++){
        if (c<=r)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
}
getch();
}
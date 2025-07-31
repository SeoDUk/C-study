#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1=0xA7, n2=0x43;
    int n3=032, n4=024;

    printf("Decimal integer value of 0xA7 : %d\n",n1);
    printf("Decimal integer value of 0x43 : %D\n",n2);
    printf("Decimal integer value of 032 : %d\n",n3);
    printf("Decimal integer value of 023 : %d\n",n4);

    if (n1<=n2)
    printf ("%d+%d=%d",n1,n2,n1+n2);

    if (n3>10||n4<10)
    printf ("%dx%d=%d",n3,n4,n3*n4);

    system("pause");
    return 0;



}
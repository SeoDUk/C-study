#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1=8;
    int num2=3;
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    printf("%dx%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d\n",num1,num2,num1/num2);
    printf("%d/%d ~~ =%d\n",num1,num2,num1%num2);
    system("pause");
    return 0;

}
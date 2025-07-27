#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1=3;
    int num2=7;

    printf("num1=%d\n",num1); // 3
    printf("num++=%d\n",num1++); //3
    printf("num1=%d\n",num1); //4

    printf("num2=%d\n",num2); //7
    printf("++num2=%d\n",++num2); //8
    printf("num2=%d\n",num2); //8

    printf("num1-- = %d\n",num1--); //4
    printf("num2-- = %d\n",num2--); //8
    printf("num1 = %d,  num2 = %d\n",num1,num2);  //3, 7

    int a=6;
    int b=(a--)+5;
    printf("a : %d\n",a); //5
    printf("b : %d\n",b); //11



    if (num1<=num2) printf("hahahahahaha!!!!!"); // num1이 num2보다 작거나 같으면 printf 실행

    system("pause");
    return 0;
}
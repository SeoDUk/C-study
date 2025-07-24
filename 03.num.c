#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2; //변수 선언 후 초기화하지 않으면, 쓰레기 값이 저장됨.
    int num3=30, num4=40;

    printf("num1 : %d, num2 : %d\n",num1,num2);
    num1=10; 
    num2=20;

    printf("num1 : %d, num2 : %d\n",num1,num2);
    printf("num3 : %d, num4 : %d\n",num3,num4);
    
    system("pause");
    return 0;
}
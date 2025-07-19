#include <stdio.h>
#include <stdlib.h>

int main(void){
int x=10; 
int y=20; {
    printf("X : %d\n", x );
    printf("Y : %d\n", y );
    
x=30; //변수 재활용
y=90; {
    printf("X : %d\n", x);
    printf("Y : %d\n", y );
    printf("X + Y = %d\n", x+y);
    system("pause");
}
    return 0;
     
    
    
}
}
//변수는 중복 선언 금지.

//변수는 하나의 값밖에 담지 못함

//변수는 재활용 가능
//변수 재활용 시, 기존의 변수를 새로 선언한 값으로 바꿈

 
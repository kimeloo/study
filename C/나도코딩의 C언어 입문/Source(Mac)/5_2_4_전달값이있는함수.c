#include <stdio.h>

// 함수 선언
void function_with_params(int num1, int num2, int num3);

int main(void)
{
    // 전달값(매개변수)이 없는 함수
    // function_without_params();
    // 전달값(매개변수)이 있는 함수
    function_with_params(1, 2, 3);

    return 0;
}

// 함수 정의
void function_with_params(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수이고, 전달값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}

#include <stdio.h>

// 함수 선언
void function_without_params(void);

int main(void)
{
    // 전달값(매개변수)이 없는 함수
    function_without_params();

    return 0;
}

// 함수 정의
void function_without_params(void)
{
    printf("전달값이 없는 함수입니다.\n");
}

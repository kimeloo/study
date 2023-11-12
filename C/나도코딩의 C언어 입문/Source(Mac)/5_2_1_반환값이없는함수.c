#include <stdio.h>

// 함수 선언
void function_without_return(void);

int main(void)
{
    // 반환값이 없는 함수 호출
    function_without_return();
    return 0;
}

// 함수 정의
void function_without_return(void)
{
    printf("반환값이 없는 함수입니다.\n");
}

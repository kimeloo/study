#include <stdio.h>

// 함수 선언
void p(int num);
void function_without_return(void);
int function_with_return(void);

int main(void)
{
    // 반환값이 없는 함수
    function_without_return();
    // 반환값이 있는 함수
    int ret = function_with_return();
    p(ret);

    return 0;
}

// 함수 정의
void p(int num)
{
    printf("num 은 %d 입니다.\n", num);
}

void function_without_return(void)
{
    printf("반환값이 없는 함수입니다.\n");
}

int function_with_return(void)
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

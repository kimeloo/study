#include <stdio.h>

// 함수 선언
void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divide(int num1, int num2);

int main(void)
{
    int num = 2;
    // 더하기 함수 호출
    num = add(num, 3);
    p(num);
    // 빼기 함수 호출
    num = sub(num, 1);
    p(num);
    // 곱하기 함수 호출
    num = mul(num, 3);
    p(num);
    // 나누기 함수 호출
    num = divide(num, 6);
    p(num);

    return 0;
}

// 함수 호출
void p(int num)
{
    printf("num은 %d입니다.\n", num);
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    return num1 / num2;
}

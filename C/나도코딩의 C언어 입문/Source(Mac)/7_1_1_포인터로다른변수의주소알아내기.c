#include <stdio.h>

int main(void)
{
    int 철수 = 1;
    int 영희 = 2;
    int 민수 = 3;

    printf("철수네 주소 : %p, 암호 : %d\n", &철수, 철수);
    printf("영희네 주소 : %p, 암호 : %d\n", &영희, 영희);
    printf("민수네 주소 : %p, 암호 : %d\n", &민수, 민수);

    int * 미션맨; // 포인터 변수
    미션맨 = &철수;
    printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
    미션맨 = &영희;
    printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
    미션맨 = &민수;
    printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

    return 0;
}

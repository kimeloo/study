#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6)
        {
            printf("나머지 학생은 집에 가세요\n");
            break;
        }
        printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
    }

    return 0;
}

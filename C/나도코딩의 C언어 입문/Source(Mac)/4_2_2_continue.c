#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            if (i == 7)
            {
                printf("%d 번 학생은 결석입니다\n", i);
                continue;
            }
            printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
        }
    }

    return 0;
}

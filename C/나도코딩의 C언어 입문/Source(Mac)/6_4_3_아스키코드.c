#include <stdio.h>

int main(void)
{
    // 0~127의 아스키코드 정수값에 해당하는 문자 확이
    for (int i = 0; i < 128; i++)
    {
        printf("아스키코드 정수 %d : %c\n", i, i);
    }

    return 0;
}

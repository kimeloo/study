#include <stdio.h>

int main(void)
{
    int num = 2;
    printf("num 은 %d 입니다\n", num); // 2

    // 2 + 3 은?
    num = num + 3; // num += 3;
    printf("num 은 %d 입니다\n", num); // 5

    // 5 -1 은?
    num -= 1; // num = num - 1;
    printf("num 은 %d 입니다\n", num); // 4

    // 4 x 3 은?
    num *= 3; // num = num * 3;
    printf("num 은 %d 입니다\n", num); // 12

    // 12 / 6 은?
    num /= 6; // num = num / 6;
    printf("num 은 %d 입니다\n", num); // 2

    return 0;
}

#include <stdio.h>

int main(void)
{
    int age = 16;
    switch (age)
    {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        printf("초등학생입니다\n");
        break;
    case 14:
    case 15:
    case 16:
        printf("중학생입니다\n");
        break;
    case 17:
    case 18:
    case 19:
        printf("고등학생입니다\n");
        break;
    default:
        printf("학생이 아닌가봐요\n");
    }

    return 0;
}

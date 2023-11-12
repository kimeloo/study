#include <stdio.h>

int main(void)
{
    char name[256];
    printf("이름을 입력하세요 : ");
    scanf("%s", name);
    printf("%s\n", name);

    return 0;
}

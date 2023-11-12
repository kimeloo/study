#include <stdio.h>

int main(void)
{
    char kor[] = "나도코딩"; // Mac 에서는 한글이 3byte
    printf("%s\n", kor);
    printf("%d\n", (unsigned)sizeof(kor)); // 3byte * 4글자 + 널(\0)문자 = 13

    return 0;
}

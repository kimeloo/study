#include <stdio.h>
#define MAX 10000

int main(void)
{
    char str1[MAX];
    char str2[MAX];
    int num[6] = { 0, 0, 0, 0, 0, 0 }; // 추첨 번호 저장
    int bonus = 0; // 보너스 번호 저장

    // 파일 읽기
    FILE* file = fopen("/Users/nadocoding/Documents/test2.txt", "rb");
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
    printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
    fscanf(file, "%s %d", str2, &bonus);
    printf("%s %d\n", str2, bonus);
    fclose(file);

    return 0;
}

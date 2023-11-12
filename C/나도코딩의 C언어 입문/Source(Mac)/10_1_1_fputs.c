#include <stdio.h>
#define MAX 10000

int main(void)
{
    char line[MAX]; // char line[10000]
    FILE* file = fopen("/Users/nadocoding/Documents/test1.txt", "wb");
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    fputs("fputs() 함수를 이용해 글을 써 볼게요.\n", file);
    fputs("잘 써지는지 확인해 주세요\n", file);
    fclose(file);

    return 0;
}

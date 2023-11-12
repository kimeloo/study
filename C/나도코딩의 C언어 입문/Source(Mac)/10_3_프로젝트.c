#include <stdio.h>
#include <string.h>
#define MAX 10000

// Mac 에서는 getch() 가 없으므로 마스킹 절차는 생략하고 모든 비밀 번호 입력 후 Enter 를 치면 문자열 비교 처리
int main(void)
{
    char line[MAX]; // 파일에서 읽어 온 내용 저장
    char contents[MAX] = ""; // 일기장에 입력한 내용 저장 (빈 값으로 초기화)
    char password[20]; // 입력한 비밀번호 저장

    printf("비밀일기에 오신 것을 환영합니다.\n");
    printf("사용할 비밀번호를 입력하세요(최대 20자리).: ");

    scanf("%s", password); // 비밀번호 입력
    
    // 비밀번호: skehzheld(나도코딩)
    printf("\n\n === 비밀번호 확인 중... ===\n\n");
    if (strcmp(password, "skehzheld") == 0) // 비밀번호 일치
    {
        printf(" === 비밀번호 확인 완료 === \n\n");
        char* fileName = "/Users/nadocoding/Documents/secretdiary.txt";
        // a+ 모드는 파일이 없으면 생성, 파일이 있으면 뒤에서부터 내용 추가
        FILE* file = fopen(fileName, "a+b");
        if (file == NULL)
        {
            printf("파일 열기 실패\n");
            return 1;
        }
        
        fseek(file, 0, SEEK_SET); // 파일 위치 지시자를 파일의 맨 앞으로 이동

        while (fgets(line, MAX, file) != NULL)
        {
            printf("%s", line);
        }

        printf("\n\n 내용을 계속 작성하세요! 종료하시려면 EXIT 를 입력하세요.\n\n");

        while (1)
        {
            scanf("%[^\n]", contents); // \n이 나오기 전까지 읽어들임(한 문장씩)
            getchar(); // Enter(\n) 입력 시 플러시 처리

            if (strcmp(contents, "EXIT") == 0)
            {
                printf("비밀일기 입력을 종료합니다\n\n");
                break;
            }
            fputs(contents, file);
            fputs("\n", file); // Enter를 위에서 무시하도록 처리했으므로 임의로 추가
        }
        fclose(file);
    }
    else // 비밀번호 틀린 경우
    {
        printf(" === 비밀번호가 틀렸어요 ===\n\n");
        printf(" 꺅!! 당신 누구야?!! 감히 내 일기장을 !!!\n\n\n");
    }

    return 0;
}

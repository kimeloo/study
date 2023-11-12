#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    char* name; // 이름
    int age; // 나이
    char* character; // 성격
    int level; // 키우기 난이도 (1~5, 5가 어려움)
} CAT;

int collection[5] = { 0, 0, 0, 0, 0 }; // 고양이를 담는 상자, 현재까지 보유한 고양이 표시
CAT cats[5]; // 보유한 전체 고양이 목록

void initCats(void); // 고양이 정보 초기화
void printCat(int selected);

int main(void)
{
    srand((unsigned)time(NULL));

    initCats();
    while (1)
    {
        printf("두근두근~! 어느 고양이의 집사가 될까요?\n아무 키나 눌러서 확인하세요!");
        getchar();

        int selected = rand() % 5; // 고양이 뽑기, 0~4 숫자 반환
        printCat(selected); // 뽑은 고양이 정보 출력 함수 호출
    }

    return 0;
}

void initCats(void)
{
    cats[0].name = "깜냥이";
    cats[0].age = 5;
    cats[0].character = "온순";
    cats[0].level = 1;

    cats[1].name = "귀요미";
    cats[1].age = 3;
    cats[1].character = "날카롭";
    cats[1].level = 2;

    cats[2].name = "수줍이";
    cats[2].age = 7;
    cats[2].character = "늘 잠만 잠";
    cats[2].level = 3;

    cats[3].name = "까꿍이";
    cats[3].age = 2;
    cats[3].character = "시끄러움";
    cats[3].level = 4;

    cats[4].name = "돼냥이";
    cats[4].age = 1;
    cats[4].character = "배고픔";
    cats[4].level = 5;
}

void printCat(int selected)
{
    printf("\n\n=== 당신은 이 고양이의 집사가 되었어요! ===\n\n");
    printf(" 이름       : %s\n", cats[selected].name);
    printf(" 나이       : %d\n", cats[selected].age);
    printf(" 특징(성격) : %s\n", cats[selected].character);
    printf(" 레벨       : ");

    for (int i = 0; i < cats[selected].level; i++)
    {
        printf("%s", "★");
    }
    printf("\n\n");
}

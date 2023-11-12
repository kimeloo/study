#include <stdio.h>

struct GameInfo {
    char* name;
    int year;
    int price;
    char* company;
};

int main(void)
{
    struct GameInfo gameInfo1;
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";

    struct GameInfo* gamePtr;
    gamePtr = &gameInfo1;
    printf("-- 미션맨의 게임 출시 정보 --\n");
    /*printf("  게임명   : %s\n", (*gamePtr).name);
    printf("  발매년도 : %d\n", (*gamePtr).year);
    printf("  가격     : %d\n", (*gamePtr).price);
    printf("  제작사   : %s\n", (*gamePtr).company);*/
    printf("  게임명   : %s\n", gamePtr->name);
    printf("  발매년도 : %d\n", gamePtr->year);
    printf("  가격     : %d\n", gamePtr->price);
    printf("  제작사   : %s\n", gamePtr->company);

    return 0;
}

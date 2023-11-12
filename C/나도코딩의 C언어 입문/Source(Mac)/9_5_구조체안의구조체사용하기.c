#include <stdio.h>

struct GameInfo {
    char* name;
    int year;
    int price;
    char* company;
    struct GameInfo* friendGame;
};

int main(void)
{
    struct GameInfo gameInfo1;
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";

    printf("-- 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo1.name);
    printf("  발매년도 : %d\n", gameInfo1.year);
    printf("  가격     : %d\n", gameInfo1.price);
    printf("  제작사   : %s\n", gameInfo1.company);

    struct GameInfo gameInfo2 = { "너도게임", 2017, 100, "너도회사" };

    printf("-- 또 다른 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo2.name);
    printf("  발매년도 : %d\n", gameInfo2.year);
    printf("  가격     : %d\n", gameInfo2.price);
    printf("  제작사   : %s\n", gameInfo2.company);

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

    gameInfo1.friendGame = &gameInfo2;
    printf("-- 다른 업체의 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo1.friendGame->name);
    printf("  발매년도 : %d\n", gameInfo1.friendGame->year);
    printf("  가격     : %d\n", gameInfo1.friendGame->price);
    printf("  제작사   : %s\n", gameInfo1.friendGame->company);

    return 0;
}

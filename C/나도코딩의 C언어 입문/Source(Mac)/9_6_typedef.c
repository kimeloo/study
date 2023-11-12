#include <stdio.h>

struct GameInfo {
    char* name;
    int year;
    int price;
    char* company;

    struct GameInfo* friendGame;
};

typedef struct {
    char* name;
    int year;
    int price;
    char* company;

    struct GameInfo* friendGame;
} GAME_INFO;

int main(void)
{
    int i = 1;
    typedef int 정수;
    정수 정수변수 = 3; // int i = 3;
    typedef float 실수;
    실수 실수변수 = 3.23f; // float f = 3.23f;
    printf("\n\n정수변수 : %d, 실수변수 %.2f\n\n", 정수변수, 실수변수);

    typedef struct GameInfo 게임정보;
    게임정보 game1;
    game1.name = "한글 게임";
    game1.year = 2015;

    GAME_INFO game2;
    game2.name = "한글 게임2";
    game2.year = 2014;

    /*struct GameInformation game3;
    game3.name = "한글 게임3";*/

    return 0;
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int arrayAnimal[4][5];
char* strAnimal[10];
int checkAnimal[4][5];

void initAnimalArray(void);
void initAnimalName(void);
void shuffleAnimal(void);
int getEmptyPosition(void);
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals(void);
void printQuestion(void);

int main(void)
{
    srand((unsigned)time(NULL));

    initAnimalArray();
    initAnimalName();
    shuffleAnimal();

    int failCount = 0;

    while (1)
    {
        int select1 = 0;
        int select2 = 0;

        printAnimals();
        printQuestion();

        printf("뒤집을 카드 2장 고르세요. : ");
        scanf("%d %d", &select1, &select2);

        if (select1 == select2)
        {
            continue;
        }
    }

    return 0;
}

void initAnimalArray()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arrayAnimal[i][j] = -1;
        }
    }
}

void initAnimalName(void)
{
    strAnimal[0] = "원숭이";
    strAnimal[1] = "하마";
    strAnimal[2] = "강아지";
    strAnimal[3] = "고양이";
    strAnimal[4] = "돼지";

    strAnimal[5] = "코끼리";
    strAnimal[6] = "기린";
    strAnimal[7] = "낙타";
    strAnimal[8] = "타조";
    strAnimal[9] = "호랑이";
}

void shuffleAnimal(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);
            arrayAnimal[x][y] = i;
        }
    }
}

int getEmptyPosition(void)
{
    while (1)
    {
        int randPos = rand() % 20;
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if (arrayAnimal[x][y] == -1)
        {
            return randPos;
        }
    }
    return 0;
}

int conv_pos_x(int x)
{
    return x / 5;
}

int conv_pos_y(int y)
{
    return y % 5;
}

void printAnimals(void)
{
    printf("\n===== 이건 비밀인데.. 몰래 보여줍니다===\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%12s", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n======================================\n\n");
}

void printQuestion(void)
{
    printf("\n\n(문제)\n");
    int seq = 0;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (checkAnimal[i][j] != 0)
            {
                printf("%8s", strAnimal[arrayAnimal[i][j]]);
            }
            else
            {
                printf("%8d", seq);
            }
            seq++;
        }
        printf("\n");
    }
}

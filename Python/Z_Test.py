#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

const int WIDTH = 60;
const int HEIGHT = 20;

int ballX, ballY, paddle1, paddle2;
int score1 = 0, score2 = 0;
int directionX, directionY;

void setup()
{
    ballX = WIDTH / 2;
    ballY = HEIGHT / 2;
    paddle1 = HEIGHT / 2 - 2;
    paddle2 = HEIGHT / 2 - 2;
    directionX = rand() % 2 == 0 ? -1 : 1;
    directionY = rand() % 2 == 0 ? -1 : 1;
}

void draw()
{
    system("cls");

    for (int i = 0; i < WIDTH + 2; i++)
    {
        cout << "#";
    }
    cout << endl;

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (j == 0)
            {
                cout << "#";
            }

            if (i == ballY && j == ballX)
            {
                cout << "O";
            }
            else if (i == paddle1 && j == 0)
            {
                cout << "|";
            }
            else if (i == paddle1 + 1 && j == 0)
            {
                cout << "|";
            }
            else if (i == paddle1 + 2 && j == 0)
            {
                cout << "|";
            }
            else if (i == paddle1 + 3 && j == 0)
            {
                cout << "|";
            }
            else if (i == paddle2 && j == WIDTH - 1)
            {
                cout << "|";
            }
            else if (i == paddle2 + 1 && j == WIDTH - 1)
            {
                cout << "|";
            }
            else if (i == paddle2 + 2 && j == WIDTH - 1)
            {
                cout << "|";
            }
            else if (i == paddle2 + 3 && j == WIDTH - 1)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }

            if (j == WIDTH - 1)
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < WIDTH + 2; i++)
    {
        cout << "#";
    }
    cout << endl;

    cout << "Player 1: " << score1 << endl;
    cout << "Player 2: " << score2 << endl;
}

void input()
{
    if (_kbhit())
    {
        char key = _getch();

        if (key == 'w')
        {
            if (paddle1 > 0)
            {
                paddle1--;
            }
        }

        if (key == 's')
        {
            if (paddle1 < HEIGHT - 4)
            {
                paddle1++;
            }
        }

        if (key == 'i')
        {
            if (paddle2 > 0)
            {
                paddle2--;
            }
        }

        if (key == 'k')
        {
            if (paddle2 < HEIGHT - 4)
            {
                paddle2++;
            }
        }

        if (key == 'q')
        {
            exit(0);
        }

        if (key == 'p')
        {
            system("pause");
        }
    }
}

void logic()
{
    ballX += directionX;
    ballY += directionY;

    if (ballX == 0)
    {
        if (ballY >= paddle1 && ballY <= paddle1 + 3)
        {
            directionX = 1;
        }
        else
        {
            score2++;
            setup();
        }
    }

    if (ballX == WIDTH - 1)
    {
        if (ballY >= paddle2 && ballY <= paddle2 + 3)
        {
            directionX = -1;
        }
        else
        {
            score1++;
            setup();
        }
    }

    if (ballY == 0 || ballY == HEIGHT - 1)
    {
        directionY = -directionY;
    }
}

int main()
{
    setup();

    while (true)
    {
        draw();
        input();
        logic();
        Sleep(10);
    }

    return 0;
}





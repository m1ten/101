// Conway's game of life in C written by Github Copilot

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH  80
#define HEIGHT 24

#define ALIVE  1
#define DEAD   0

#define TRUE   1
#define FALSE  0

int main(void)
{
    int i, j, k, l, m, n, alive, dead, x, y;
    int grid[HEIGHT][WIDTH];
    int newgrid[HEIGHT][WIDTH];

    srand(time(NULL));

    for (i = 0; i < HEIGHT; i++)
        for (j = 0; j < WIDTH; j++)
            grid[i][j] = rand() % 2;

    while (TRUE) {
        system("cls");

        for (i = 0; i < HEIGHT; i++) {
            for (j = 0; j < WIDTH; j++) {
                if (grid[i][j] == ALIVE)
                    printf("*");
                else
                    printf(" ");
            }
            printf("");
        }

        for (i = 0; i < HEIGHT; i++) {
            for (j = 0; j < WIDTH; j++) {
                alive = 0;
                dead = 0;

                for (k = -1; k <= 1; k++) {
                    for (l = -1; l <= 1; l++) {
                        x = i + k;
                        y = j + l;

                        if (x < 0)
                            x = HEIGHT - 1;
                        if (x >= HEIGHT)
                            x = 0;
                        if (y < 0)
                            y = WIDTH - 1;
                        if (y >= WIDTH)
                            y = 0;

                        if (grid[x][y] == ALIVE)
                            alive++;
                        else
                            dead++;
                    }
                }

                if (grid[i][j] == ALIVE)
                    alive--;
                else
                    dead--;

                if (grid[i][j] == ALIVE) {
                    if (alive < 2)
                        newgrid[i][j] = DEAD;
                    else if (alive > 3)
                        newgrid[i][j] = DEAD;
                    else
                        newgrid[i][j] = ALIVE;
                } else {
                    if (alive == 3)
                        newgrid[i][j] = ALIVE;
                    else
                        newgrid[i][j] = DEAD;
                }
            }
        }

        for (i = 0; i < HEIGHT; i++)
            for (j = 0; j < WIDTH; j++)
                grid[i][j] = newgrid[i][j];

        for (m = 0; m < 100000000; m++)
            for (n = 0; n < 100000000; n++)
                ;
    }

    return 0;

}
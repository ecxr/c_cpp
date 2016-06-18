#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDES 6
#define R_SIDE (rand() % SIDES + 1)
#define N_DICE 2

int main(int argc, char* argv[])
{
    int trials = 0;
    int d1, d2 = 0;
    int outcomes[(N_DICE * SIDES)+1] = { 0 };

    srand(clock());
    printf("\nEnter number of trials: ");
    scanf("%d", &trials);

    for (int j = 0; j < trials; ++j)
    {
        outcomes[(d1 = R_SIDE) + (d2 = R_SIDE)]++;
    }

    printf("probability\n");

    for (int j = 2; j <= (N_DICE * SIDES); ++j)
    {
        printf("j = %d p = %lf\n",
            j, (double)outcomes[j] / trials);
    }
}

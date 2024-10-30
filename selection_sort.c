#include <stdio.h>

int main(void)
{
    const short int LENGTH = 20;
    int numbers[20] = {7, 3, 14, 1, 20, 9, 11, 5, 18, 15, 6, 10, 12, 2, 8, 17, 4, 19, 16, 13};

    for (int i = 0; i < LENGTH; i++)
    {
        int indexMinValue = i;
        int swap = 0;

        for (int j = i; j < LENGTH; j++)
        {
            if (numbers[j] < numbers[indexMinValue])
            {
                indexMinValue = j;
            }
        }

        swap = numbers[i];
        numbers[i] = numbers[indexMinValue];
        numbers[indexMinValue] = swap;

        printf("%i ", numbers[i]);
    }
    printf("\n");
    return 0;
}
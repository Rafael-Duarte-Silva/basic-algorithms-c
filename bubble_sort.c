#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    const short int LENGTH = 20;
    int numbers[20] = {7, 3, 14, 1, 20, 9, 11, 5, 18, 15, 6, 10, 12, 2, 8, 17, 4, 19, 16, 13};

    for (int i = 0; i < LENGTH - 1; i++)
    {
        int swap = 0;
        bool isSwapped = false;

        for (int j = 0; j < LENGTH - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = swap;

                isSwapped = true;
            }
        }

        if (isSwapped == false)
        {
            break;
        }
    }

    // for display only
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    return 0;
}
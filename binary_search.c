#include <stdio.h>

int main(void)
{
    const short int LENGTH = 20;
    int numbers[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int search = 18;

    short int low = 0;
    short int high = LENGTH - 1;
    while (low <= high)
    {
        short int mid = low + (high - low) / 2;

        if (numbers[mid] == search)
        {
            printf("Found is %i\n", numbers[mid]);
            return 0;
        }
        else if (numbers[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Not found\n");
    return 0;
}
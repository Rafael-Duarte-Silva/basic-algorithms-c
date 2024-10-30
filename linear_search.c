#include <stdio.h>

int main(void)
{
    const short int LENGTH = 20;
    int numbers[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int search = 18;

    for (int i = 0; i < LENGTH; i++)
    {
        if (search == numbers[i])
        {
            printf("Found\n");
            return 1;
        }
    }

    printf("Not found\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 20

void merge(int *array, short int high, short int low, short int mid);
void mergeSort(int *array, short int high, short int low);

int main(void)
{
    int numbers[LENGTH] = {7, 3, 14, 1, 20, 9, 11, 5, 18, 15, 6, 10, 12, 2, 8, 17, 4, 19, 16, 13};
    mergeSort(numbers, LENGTH - 1, 0);

    // for display only
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    return 0;
}

void merge(int *array, short int high, short int low, short int mid)
{
    short int leftSize = mid - low + 1;
    short int rightSize = high - mid;
    int *left = (int *)calloc(leftSize, sizeof(int));
    int *right = (int *)calloc(rightSize, sizeof(int));

    if (left == NULL || right == NULL)
    {
        return;
    }

    for (int i = 0; i < leftSize; i++)
    {
        left[i] = array[low + i];
    }
    for (int i = 0; i < rightSize; i++)
    {
        right[i] = array[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = low;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        array[k] = right[j];
        j++;
        k++;
    }
    free(left);
    free(right);
}

void mergeSort(int *array, short int high, short int low)
{
    if (low < high)
    {
        short int mid = low + (high - low) / 2;

        mergeSort(array, mid, low);
        mergeSort(array, high, mid + 1);

        merge(array, high, low, mid);
    }
}
#include <stdio.h>

void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void mySelectionSort(int arr[], int n)
{
    int minIdx;

    for (int i = 0; i < n; i++)
    {
        minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
            swap(&arr[minIdx], &arr[i]);
    }
}



void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%i  ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {60, 40, 50, 30, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    mySelectionSort(arr, n);
    printf("---------------------\n");
    print(arr, n);
    return 0;
}

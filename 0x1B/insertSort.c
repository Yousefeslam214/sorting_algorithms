#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertSort(int arr[], int n)
{
    int key,j;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    int arr[] = { 100,60,20,50 ,30,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertSort(arr,n);
    print(arr,n);
}

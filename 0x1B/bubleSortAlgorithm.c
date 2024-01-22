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

void bubbleSort(int arr[], int n)
{
    bool flag = true; int c = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = false;
            }
            
            c++;
        }
        if (flag == true)
            break;
    }
    printf("the nember of %i \n", c);
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
    bubbleSort(arr,n);
    print(arr,n);
}

#include "main.h"
#include <stdio.h>

int main()
{
    int arr[] = { 100,60,20,50 ,30,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    print(arr,n);
}

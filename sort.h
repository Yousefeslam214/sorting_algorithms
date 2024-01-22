#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void print(int arr[], int size);
void swap(int *x, int *y);
void swap(int *a, int *b);
int partition(int arr[], int low, int high, size_t size);
void quicksort(int arr[], ssize_t low, ssize_t high, int size);
void quick_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
listint_t *swap_list(listint_t *a, listint_t *b, listint_t **list);
void selection_sort(int *array, size_t size);

#endif

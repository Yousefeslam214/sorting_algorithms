#include "sort.h"

/**
 * swap_list - swaps two elements in a doubly linked list
 * @a: left element
 * @b: right element
 * @list: pointer to the head of the doubly linked list
 * Return: pointer to a (actual)
 */
listint_t *swap_list(listint_t *a, listint_t *b, listint_t **list)
{
    if (a->prev)
        (a->prev)->next = b;
    else
    {
        *list = b;
        b->prev = NULL;
    }

    if (b->next)
        (b->next)->prev = a;

    b->prev = a->prev;
    a->prev = b;
    a->next = b->next;
    b->next = a;

    return (a);
}

/**
 * insertion_sort_list - sorts a doubly linked list using the insertion sort algorithm
 * @list: pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *actual, *prev, *back;

    if (!list || !(*list) || !(*list)->next)
        return;

    actual = (*list)->next;

    while (actual)
    {
        prev = actual->prev;
        back = actual;

        while (back->prev && back->n < prev->n)
        {
            actual = swap_list(prev, back, list);
            print_list(*list);

            if (!back->prev)
                break;

            prev = back->prev;
        }

        actual = actual->next;
        prev = prev->next;
    }
}

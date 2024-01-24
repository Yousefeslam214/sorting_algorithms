#include "sort.h"

/**
 * cocktail_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Cocktail sort ailgorithm
 * @list: pointer to the list head
 * Return: no return
 **/
void cocktail_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL)
        return;
    
    listint_t *sorted = NULL;
    listint_t *current = *list;
    listint_t *temp, *next;
    
    while (current != NULL)
    {
        next = current->next;
        if (sorted == NULL || sorted->n >= current->n)
        {
            current->next = sorted;
            current->prev = NULL;
            if(sorted != NULL)
                sorted->prev = current;
            sorted = current;
            print_list(current);
        }
        else
        {
            temp = sorted;
            while(temp->next != NULL && temp->next->n < current->n)
                temp = temp->next;
            current->next = temp->next;
            current->prev = temp;
            if(temp->next != NULL)
                temp->next->prev = current;
            temp->next = current;
            print_list(current);
        }
        current = next;
        print_list(current);
    }
    *list = sorted;
}

#ifndef SORT_H
#define SORT_H

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

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

/*Function Prototypes*/
void print_array(const int *array, size_t size); /*Prints an array of integers*/
void print_list(const listint_t *list);  /*Prints a list of integers*/
void bubble_sort(int *array, size_t size); /*Sorts an array of integers in ascending order*/
#endif /*SORT_H*/
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
void insertion_sort_list(listint_t **list); /*Sorts a linked list*/
int len_list(listint_t *h); /*Returns the length of a linked list*/
void selection_sort(int *array, size_t size); /*Sorts an array following the selection sort algorithm*/
void quick_recursion(int *array, int left, int right, size_t size); /*Recursive function for Quicksort*/
void quick_sort(int *array, size_t size); /*Sorts an array of integers in ascending order using the Quick sort algorithm*/
int partition(int *array, int left, int right, size_t size); /*Partitions the array for Quicksort*/
void shell_sort(int *array, size_t size);
size_t list_len(listint_t *list);
void switch_nodes(listint_t **list, listint_t **p);
void cocktail_sort_list(listint_t **list);
 
#endif /*SORT_H*/
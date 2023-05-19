#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

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

/* Prototypes given */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Prototypes */
/* 0 */
void bubble_sort(int *array, size_t size);
/* 1 */
void insertion_sort_list(listint_t **list);
void change(listint_t *a, listint_t *b, listint_t **list);
/* 2 */
void selection_sort(int *array, size_t size);
/* 3 */
void quick_sort(int *array, size_t size);
void sort_rev(int *array, size_t size, size_t min, size_t max);

#endif

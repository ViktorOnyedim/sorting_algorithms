#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
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
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);

void selection_sort(int *array, size_t size);
/* quick _sort */
void quick_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t, int left, int right);
void quick_sort_recursive(int *array, size_t size, int left, int right);
/* end of quick_sort */
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
/* merge sort */
void merge_sort(int *array, size_t size);
void TDMerge(size_t start, size_t middle, size_t end, int *dest, int *source);
void TDSplitMerge(size_t start, size_t end, int *array, int *copy);
/* End of Merge sort */
void heap_sort(int *array, size_t size);
void sift_down(int *array, size_t root, size_t end, size_t size);
void make_heap(int *array, size_t size);

void radix_sort(int *array, size_t size);
unsigned int pow_10(unsigned int power);
unsigned int count_sort(int *array, size_t size, unsigned int digit);

void bitonic_sort(int *array, size_t size);
void bitonic_compare(char up, int *array, size_t size);
void bitonic_merge(char up, int *array, size_t size);
void bit_sort(char up, int *array, size_t size, size_t t);

void quick_sort_hoare(int *array, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size);

#endif /* SORT_H */

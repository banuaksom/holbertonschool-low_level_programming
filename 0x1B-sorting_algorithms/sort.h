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
void print_array(const int *array, size_t size);
void swap(int *a, int *b);
void swap_arr(int *array, size_t size, int i, int j);
void pswap(int **array, int idx1, int idx2);
void quicksort(int *array, size_t size, int start, int end);
int partition(int *array, size_t size, int start, int end);
int partition2(int *array, size_t size, size_t startIdx,
		size_t endIdx);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void delete_node(listint_t *node);
void counting_sort(int *array, size_t size);
int max_arr(int *array, size_t size);
void count_sort(int *array, int size, int diviser);
void radix_sort(int *array, size_t size);
void join_arr(int *array, int *new_arr, size_t left, size_t middle,
		size_t right);
void divide(int *array, int *new_arr, size_t left, size_t right);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, int end, int start,  size_t size);
void shell_sort(int *array, size_t size);
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2);
int b_sort(listint_t **head, listint_t **cur, int switch_dir);
void cocktail_sort_list(listint_t **list);
void bitonic_recursion(int *array, size_t size, size_t start,
		size_t count, int dir);
void bitonic_merge(int *array, size_t start, size_t count, int dir);
void bitonic_compare(int *array, int idx1, int idx2, size_t dir);
void swap_arr2(int *array, int i, int j);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void quick_sort_recurs(int *array, size_t size, size_t startIdx,
		size_t endIdx);

#endif

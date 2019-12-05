#include "binary_trees.h"

/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	while (i < size)
	{
		bst_insert(&root, array[i]);
		++i;
	}
	return (root);
}

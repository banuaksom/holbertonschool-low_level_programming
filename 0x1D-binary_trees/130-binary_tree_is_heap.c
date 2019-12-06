#include "binary_trees.h"

/**
 * binary_tree_is_heap -  a function that checks if a
 * binary tree is a valid Max Binary Heap
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid Max Binary Heap, and 0          otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_is_complete(tree) &&
			bt_is_heap(tree));
}

/**
 * bt_is_heap -  a function that checks if a
 * binary tree is a   valid Max Binary Heap
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid Max Binary Heap, and 0          otherwise
 */
int bt_is_heap(const binary_tree_t *tree)
{
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->right)
		return (tree->n >= tree->left->n);
	if (tree->n >= tree->left->n &&
			tree->n >= tree->right->n)
	{
		return (bt_is_heap(tree->left) &&
				bt_is_heap(tree->right));
	}
	else
		return (0);
}

/**
 * binary_tree_size - a function that measures the size of a    binary tree
 * @tree: a pointer to the root node of the tree to measure     the size
 *
 * Return: the size of the binary tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1 : 0);

}

/**
 * bt_complete - checks if a bt is complete recursively
 * @tree: pointer to the root node
 * @tree_size: size of tree
 * @index: index of node
 *
 * Return: 1, if tree is NULL
 */
int bt_complete(const binary_tree_t *tree, int index, int tree_size)
{
	if (tree == NULL)
		return (1);
	if (index >= tree_size)
		return (0);
	return (bt_complete(tree->left, 2 * index + 1, tree_size)   &&
			bt_complete(tree->right, 2 * index + 2,             tree_size));


}

/**
 * binary_tree_is_complete - checks if a binary tree is         complete
 * @tree: pointer to a root node
 *
 * Return: 1, 0 if tree is NULL or not complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int tree_size, index;

	if (tree)
	{
		tree_size = binary_tree_size(tree);
		index = 0;

		return (bt_complete(tree, index, tree_size));

	}
	return (0);

}

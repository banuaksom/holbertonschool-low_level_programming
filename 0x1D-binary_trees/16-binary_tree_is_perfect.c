#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree otherwise 0:
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of the binary tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1 : 0);
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height;

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	return (size == (2 << height) - 1);
}

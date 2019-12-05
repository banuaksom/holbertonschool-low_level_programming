#include "binary_trees.h"

/**
 * binary_tree_is_bst - a function that checks if a
 * binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int lower = 0, higher = 0;

	return (bt_is_bst(tree, lower, higher));
}

/**
 * bt_is_bst - a function that checks if a
 * binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @lower: lower end of the tree
 * @higher: higher end of the tree
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int bt_is_bst(const binary_tree_t *tree, int lower, int higher)
{
	if (!tree)
		return (1);
	if (lower && tree->n < lower)
		return (0);
	if (higher && tree->n > higher)
		return (0);
	return (bt_is_bst(tree->left, lower, tree->n) &&
			bt_is_bst(tree->right, tree->n, higher));
}

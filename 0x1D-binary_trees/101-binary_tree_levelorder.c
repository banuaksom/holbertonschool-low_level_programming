#include "binary_trees.h"

/**
 * binary_tree_levelorder - a function that goes through a
 * binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, height = binary_tree_height(tree) + 1;

	for (i = 1; i <= height; i++)
		bt_levelorder(tree, func, i);
}

/**
 * bt_levelorder - a function that goes through a
 * binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * @level: current level in the binary tree
 *
 * Return: void
 */
void bt_levelorder(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		bt_levelorder(tree->left, func, level - 1);
		bt_levelorder(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - a function that measures the height of  a binary tree
 * @tree: a pointer to the root node of the tree to measure     the height
 *
 * Return: height of the binary tree otherwise 0:
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

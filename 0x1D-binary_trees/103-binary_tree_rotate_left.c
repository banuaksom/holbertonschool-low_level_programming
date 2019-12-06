#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation
 * @tree: pointer to root node of tree to rotate
 * Return: pointer to new root node of tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (tree && tree->right)
	{
		temp = tree->right->left;
		tree->right->left = tree;
		tree->right->parent = NULL;
		tree->parent = tree->right;
		tree->right = temp;
		if (temp)
			temp->parent = tree;
		tree = tree->parent;
	}
	return (tree);
}

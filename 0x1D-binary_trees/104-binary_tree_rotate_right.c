#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation
 * @tree: pointer to the root node of tree to rotate
 * Return: pointer to new root node of tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (tree && tree->left)
	{
		temp = tree->left->right;
		tree->left->right = tree;
		tree->left->parent = NULL;
		tree->parent = tree->left;
		tree->left = temp;
		if (temp)
			temp->parent = tree;
		tree = tree->parent;

	}
	return (tree);

}

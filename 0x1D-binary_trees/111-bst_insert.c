#include "binary_trees.h"

/**
 * bst_insert - a function that inserts a value in a Binary Search Tree
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);
	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	return (bst_insert_helper(*tree, value));
}

/**
 * bst_insert_helper - a function that inserts a value in a Binary Search Tree
 * @tree: a pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert_helper(bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (tree->n > value)
	{
		if (!tree->left)
		{
			node = binary_tree_node(tree, value);
			tree->left = node;
			return (node);
		}
		else
			return (bst_insert_helper(tree->left, value));
	}
	else if (tree->n < value)
	{
		if (!tree->right)
		{
			node = binary_tree_node(tree, value);
			tree->right = node;
			return (node);
		}
		else
			return (bst_insert_helper(tree->right, value));
	}
	return (NULL);
}

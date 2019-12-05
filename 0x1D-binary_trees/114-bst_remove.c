#include "binary_trees.h"

/**
 * bst_remove - a function that removes a node from a Binary Search Tree
 * @root: a pointer to the root node of the tree where you will remove a node
 * @value: the value to remove in the tree
 *
 * Return: a pointer to the new root node of the tree
 * after removing the desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL, *parent, *successor;

	if (!root)
		return (NULL);
	if (root->n > value)
	{
		root->left = bst_remove(root->left, value);
		return (root);
	}
	else if (root->n < value)
	{
		root->right = bst_remove(root->right, value);
		return (root);
	}
	if (!root->left)
	{
		temp = root->right;
		free(root);
		return (temp);
	}
	else if (!root->right)
	{
		temp = root->left;
		free(root);
		return (temp);
	}
	else
	{
		parent = root->right;
		successor = root->right;
		while (successor->left)
		{
			parent = successor;
			successor = successor->left;
		}
		parent->left = successor->right;
		root->n = successor->n;
		free(successor);
		return (root);
	}
}

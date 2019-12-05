#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of the binary tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    return (tree ? binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1 : 0);
}

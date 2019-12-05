#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: the depth of the node otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (!tree)
        return (0);
    while (tree->parent)
    {
        ++depth;
        tree = tree->parent;
    }
    return (depth);
}

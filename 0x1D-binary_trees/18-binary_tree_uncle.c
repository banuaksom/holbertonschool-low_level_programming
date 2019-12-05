#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node && node->parent && node->parent->parent)
    {
        if (node->parent->parent->left != node->parent)
            return (node->parent->parent->left);
        else if (node->parent->parent->right != node->parent)
            return (node->parent->parent->right);

    }
    return (NULL);
}

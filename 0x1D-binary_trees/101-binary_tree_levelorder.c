#include "binary_trees.h"

/**
 * binary_tree_levelorder - a function that goes through a binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    binary_tree_t *queue = NULL;
    
    queue = calloc(1, sizeof(binary_tree_t) * binary_tree_size(tree));
    


}

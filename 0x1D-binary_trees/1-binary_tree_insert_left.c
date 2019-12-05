#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node 
 * 
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *temp, *l_node;

    l_node = binary_tree_node(parent, value);
    if (parent->left)
    {
        temp = parent->left;
        parent->left = l_node;
        l_node->left = temp;
        temp->parent = l_node;
    }
    parent->left = l_node;
    return (l_node);
}

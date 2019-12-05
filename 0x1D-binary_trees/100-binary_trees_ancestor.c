#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *root = first->parent;

    while (root->parent)
    {
        root = root->parent;
    }
    return bt_ancestor(root, first, second);
}
/**
 * bt_ancestor - a function that finds the lowest common ancestor of two nodes
 * @root: a pointer to the root node
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *bt_ancestor(binary_tree_t *root, const binary_tree_t *first, const binary_tree_t *second)
{    
    binary_tree_t *left, *right = NULL;

    if (!root)
        return NULL;
    if (root == first || root == second)
        return root;
    left = bt_ancestor(root->left, first, second);
    right = bt_ancestor(root->right, first, second);
    if (left && right)
        return root;
    return left ? left: right;
}

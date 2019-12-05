#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the binary tree otherwise 0:
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_l;
    size_t height_r;

    height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
    return (height_l > height_r ? height_l : height_r);

}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root of binary tree
 * Return: balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int height_l;
    int height_r;

    if (!tree)
        return (0);

    height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
    return (height_l - height_r);
}

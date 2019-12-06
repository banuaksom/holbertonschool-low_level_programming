#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the
 * lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node
 * of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second
		)
{
	size_t first_depth, second_depth;

	if (!first || !second)
		return (NULL);
	first_depth = node_depth((binary_tree_t *)first);
	second_depth = node_depth((binary_tree_t *)second);
	for (; first_depth > second_depth; --first_depth)
		first = first->parent;
	for (; second_depth > first_depth; --second_depth)
		second = second->parent;
	while (first_depth)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

/**
 * node_depth - returns the depth of a node in a binary tree
 * @node: a pointer to the node to find depth
 * Return: depth of node
 */
size_t node_depth(binary_tree_t *node)
{
	size_t count = 0;

	if (!node)
		return (0);
	while (node->parent)
	{
		++count;
		node = node->parent;

	}
	return (count);
}

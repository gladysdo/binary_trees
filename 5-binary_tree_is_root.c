#include "binary_trees.h"

/**
 * binary_tree_is_root - To check if a given node is a root in a binary tree
 * @node: Check if the given node is NULL.
 * Return: 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

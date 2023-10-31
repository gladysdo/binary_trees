#include "binary_trees.h"

/**
 * binary_tree_delete - it is recursively traversing and deleting all nodes
 * @tree: pointer to the root
 * Return: 0
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

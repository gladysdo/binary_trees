#include "binary_trees.h"

/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Check if the tree is NULL, and if so, return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* If the current node is a leaf (no children), it's a full node */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/* If the current node has two children,continue to check recursively */
	if (tree->left != NULL && tree->right != NULL)
	{
		int left_full = binary_tree_is_full(tree->left);
		int right_full = binary_tree_is_full(tree->right);

		return (left_full && right_full);
	}

	return (0);
}

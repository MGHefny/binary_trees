#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node root binary tree
 * @node: A pointer to the node to check
 * Return: - 1 or - 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL )
		return (0);

	return (1);
}

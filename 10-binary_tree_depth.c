#include "binary_trees.h"

/**
 * binary_tree_depth - depth node binary tree
 * @tree: pointer
 * Return:  0 or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

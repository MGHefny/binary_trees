#include "binary_trees.h"

/**
 * binary_tree_leaves - leaves binary tree
 * @tree: pointer
 * Return: leaves tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree)
	{
		x += (!tree->left && !tree->right) ? 1 : 0;
		x += binary_tree_leaves(tree->left);
		x += binary_tree_leaves(tree->right);
	}
	return (x);
}

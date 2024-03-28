#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes binary tre
 * @tree: node of tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}

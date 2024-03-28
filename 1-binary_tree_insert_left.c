#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as left-child
 * @parent: pointer node insert left-child in
 * @value: value sre in new node
 *
 * Return: parent NULL or error occurs
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);

	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		n->left = parent->left;
		parent->left->parent = n;
	}
	parent->left = n;

	return (n);
}

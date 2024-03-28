#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert  node right-child
 * @parent: A pointer  node  insert  right-child in.
 * @value:  value  sre new node
 * Return: parent  NULL or error occurs
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);

	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;

	return (n);
}

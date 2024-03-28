#include "binary_trees.h"
/**
 * binary_tree_node - binary tree node
 * @parent: pointer toparent of node create
 * @value: value put in new node
 * Return: error occurs - NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	n = malloc(sizeof(binary_tree_t));
	if (n == NULL)
		return (NULL);

	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;

	return (n);
}

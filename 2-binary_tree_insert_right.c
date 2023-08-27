#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a right node of a bt
 * @parent: pointer to present node
 * @value: value of the node
 * Return: pointer to node created
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
		return (new);
	}
	new->right = parent->right;
	parent->right = new;
	return (new);
}
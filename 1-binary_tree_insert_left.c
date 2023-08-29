#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a left node of a bt
 * @parent: pointer to present node
 * @value: value of the node
 * Return: pointer to node created
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->right = NULL;
	new->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
		return (new);
	}
	new->left = parent->left;
	parent->left = new;
	new->left->parent = new;
	return (new);
}

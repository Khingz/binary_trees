#include "binary_trees.h"

/**
 * binary_tree_node - creates a node
 * @parent: pointer of parent node
 * @value: Value of created node
 * Return: pointer to new node ccreated
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	return (new);
}

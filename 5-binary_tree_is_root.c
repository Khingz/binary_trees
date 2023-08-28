#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to root node
 * Return: void
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
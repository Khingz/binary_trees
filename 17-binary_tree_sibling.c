#include "binary_trees.h"

/**
 * binary_tree_sibling - checks if tree is full
 * @node: pointer to tree to print
 * Return: 1 if full else 0
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->right)
	{
		return (node->parent->left);
	}
	else if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
		return (NULL);
}

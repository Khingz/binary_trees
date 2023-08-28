#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to tree to print
 * Return - 1 if full else 0
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		return node->parent->parent->right;
	}
	return node->parent->parent->left;
}

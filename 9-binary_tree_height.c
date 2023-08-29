#include "binary_trees.h"

/**
 * binary_tree_height - checks for height of a tree
 * @tree: pointer to tree to print
 * Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (right > left)
	{
		return (right);
	}
	return (left);
}

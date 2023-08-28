#include "binary_trees.h"

/**
 * binary_tree_depth - checks for height of a tree
 * @tree: pointer to tree to print
 * Return - height of tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}

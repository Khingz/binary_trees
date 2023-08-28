#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - checks number of non-nodes nodes
 * @tree: pointer to tree to print
 * Return - height of tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - checks for height of a tree
 * @tree: pointer to tree to print
 * Return - height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		left = binary_tree_height(tree->left);
	if (tree->right)
		right = binary_tree_height(tree->right);
	if (right > left)
	{
		return right + 1;
	}
	return (left + 1);
}
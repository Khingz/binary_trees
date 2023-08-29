#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to tree to print
 * Return - 1 if full else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left && right);
}

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: pointer to root node
 * Return: void
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}

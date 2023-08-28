#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_leaves - checks number of leaves
 * @tree: pointer to tree to print
 * Return - height of tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);
	return (right + left);
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
#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_nodes - checks number of non-nodes nodes
 * @tree: pointer to tree to print
 * Return - height of tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (0);
	}
	right = 1 + binary_tree_nodes(tree->right);
	left = 1 + binary_tree_nodes(tree->left);
	return (right + left - 1);
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

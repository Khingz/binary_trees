#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to tree to print
 * Return: 1 if full else 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth, left, right;

	if (tree == NULL)
		return (0);
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
	printf("%d left depth: %d\n", tree->n, left_depth);
	printf("%d right depth: %d\n",  tree->n, right_depth);
	printf("%d left depth: %d- %d = %d\n", tree->n, left_depth, right_depth, left_depth-right_depth);

	if (left_depth != right_depth)
	{
		return (0);
	}
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	return (left && right);
}

/**
 * binary_tree_depth - checks for height of a tree
 * @tree: pointer to tree to print
 * Return: height of tree
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

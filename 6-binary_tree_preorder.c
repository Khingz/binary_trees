#include "binary_trees.h"

/**
 * binary_tree_preorder - prints a node, pre order
 * @tree: pointer to tree to print
 * @func: function to print node
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

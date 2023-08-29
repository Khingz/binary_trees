#include "binary_trees.h"

/**
 * binary_tree_is_inorder - prints a node, inorder
 * @tree: pointer to tree to print
 * @func: function 
*/
 void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
 {
	if (tree == NULL) {
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
 }

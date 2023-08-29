#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);
binary_tree_t *equate(const binary_tree_t *first, size_t diff);
binary_tree_t *find_lca(const binary_tree_t *first, const binary_tree_t *second);

/**
 * binary_trees_ancestor - checks for LCA
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to LCA or NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t left, right;

	if (!first || !second)
		return (NULL);

	left = binary_tree_depth(first);
	right = binary_tree_depth(second);

	first = equate(first, left - right);
	second = equate(first, right - left);

	printf("node of f and l is %d and %d\n", first->n, second->n);

	return (find_lca(first, second));
}

/**
 * binary_tree_depth - checks for depth of a tree
 * @tree: pointer to tree to print
 * Return: depth of tree
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

/**
 * equate - move a node to be at the same depth with the other node
 * @node: the node to equate
 * diff: diiference between depth of the nodes
 * Return: Node at the same depth
*/
binary_tree_t *equate(const binary_tree_t *node, size_t diff)
{
	if (!node || diff <= 0)
		return ((binary_tree_t *)node);
	return (equate(node->parent, diff - 1));
}

/**
 * find_lca - recursively find lca
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to LCA or NULL
*/
binary_tree_t *find_lca(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == second)
		return ((binary_tree_t *)first);
	return find_lca(first->parent, second->parent);
}

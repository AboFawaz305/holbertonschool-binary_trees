#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a binary tree
 * @tree: a binary tree
 *
 * Return: the depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}

#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of tree nodes
 * @tree: a binary tree
 *
 * Return: the number of tree nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}

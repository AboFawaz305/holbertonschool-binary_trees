#include "binary_trees.h"

/**
 * is_leaf - returns whether node is leaf or not
 * @node: a binary tree node
 *
 * Return: return 1 if node is a leaf, otherwise 0
 */
int is_leaf(const binary_tree_t *node)
{
	return (node != NULL && node->right == NULL && node->left == NULL);
}

/**
 * binary_tree_height - return the height of tree
 * @tree: a binary tree
 *
 * Return: the height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || is_leaf(tree))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (1 + left_height);
	return (1 + right_height);
}

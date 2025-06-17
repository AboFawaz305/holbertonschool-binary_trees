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
 * binary_tree_is_perfect - returns whether tree is perfect or not
 * @tree: a binary tree
 *
 * Return: 1 if tree is perfect or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL ||
			(tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (0);
	if (is_leaf(tree->right) && is_leaf(tree->left))
		return (1);
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->left));
}

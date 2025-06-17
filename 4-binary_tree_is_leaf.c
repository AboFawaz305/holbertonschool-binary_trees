#include "binary_trees.h"

/**
 * binary_tree_is_leaf - returns whether node is leaf or not
 * @node: a binary tree node
 *
 * Return: return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node != NULL && node->right == NULL && node->left == NULL);
}

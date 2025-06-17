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
 * height - return the height of tree
 * @tree: a binary tree
 *
 * Return: the height of tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || is_leaf(tree))
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);
	if (left_height > right_height)
		return (1 + left_height);
	return (1 + right_height);
}

/**
 * is_perfect - a helper function for binary_tree_is_perfect
 * @tree: a binary tree
 * @h: the heght of the tree
 * @i: start height
 *
 * Return: 1 if tree is perfect or 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, size_t h, size_t i)
{
	if (tree == NULL)
		return (0);
	if (h == i)
		return (1);
	return (tree->left != NULL &&
		tree->right != NULL &&
		is_perfect(tree->left, h, i + 1) &&
		is_perfect(tree->right, h, i + 1));

}

/**
 * binary_tree_is_perfect - returns whether tree is perfect or not
 * @tree: a binary tree
 *
 * Return: 1 if tree is perfect or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (is_perfect(tree, height(tree), 0));
}

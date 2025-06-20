#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree inorder
 * @tree: a binary tree
 * @func: a function to process each node value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

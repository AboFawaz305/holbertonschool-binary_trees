#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to the root node of the tree to check
*
* Description: A full binary tree is a tree where every node has either
* 0 or 2 children (no node has only 1 child)
*
* Return: 1 if tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* If it's a leaf node (no children), it's full */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* If it has both children, check recursively */
if (tree->left != NULL && tree->right != NULL)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

/* If it has only one child, it's not full */
return (0);
}

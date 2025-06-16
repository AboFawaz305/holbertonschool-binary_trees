#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - a function that creates binary tree node
*
* @parent: a pointer to the parent node
* @value: a value to put the new node
*
* Return: return a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}

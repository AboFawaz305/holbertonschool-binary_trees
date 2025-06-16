#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - isnsert a node on the left
 * @parent: the parent of the new node
 * @value: the value of the new node
 *
 * Return: the address of the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->right = NULL;
	new_node->left = parent->left;
	new_node->parent = parent;
	new_node->n = value;
	parent->left = new_node;
	return (new_node);
}

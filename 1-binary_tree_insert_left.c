#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node at the left
 * of a binary tree
 * @value: value to be inserted
 * @parent: the root node
 * Return: returns the new allocated node to be inserted at the left
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (!new || parent == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}


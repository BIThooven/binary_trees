#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that inserts a node at the right
 * of a binary tree
 * @value: value to be inserted
 * @parent: the root node
 * Return: returns the new allocated node to be inserted at the right
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (!new || parent == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

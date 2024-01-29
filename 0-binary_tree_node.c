#include "binary_trees.h"
/**
 * binary_tree_node - a function that allocates memory for a binary tree node
 * @parent: the root node of the binary tree
 * @value: the value to be inserted in a node
 * Return: returns the newly allocated memory
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->parent = parent;
	root->n = value;
	root->left = root->right = NULL;

	return (root);
}


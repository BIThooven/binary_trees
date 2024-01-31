#include "binary_trees.h"
/**
 * binary_tree_preorder - a function to traverse a binary tree
 * @tree: the tree to be traversed
 * @func: a function that calls each node
 * Return: returns nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

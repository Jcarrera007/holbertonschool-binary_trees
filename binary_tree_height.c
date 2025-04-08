#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree in edges
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height in edges (0 if NULL or leaf)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (left > right ? left : right);
}


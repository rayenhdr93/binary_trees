#include "binary_trees.h"
/**
 * binary_tree_size - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

#include "binary_trees.h"
/**
 * binary_tree_nodes - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
	{
		return (0);
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_is_full - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: is_full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (binary_tree_is_full(tree->left) - binary_tree_is_full(tree->right)
	 == 0 ? 1 : 0);
}

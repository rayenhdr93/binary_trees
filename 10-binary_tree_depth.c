#include "binary_trees.h"
/**
 * binary_tree_depth - Pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}

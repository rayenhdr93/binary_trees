#include "binary_trees.h"
/**
 * binary_tree_delete - Delete
 * @tree: tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree)
	{
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
	}
}

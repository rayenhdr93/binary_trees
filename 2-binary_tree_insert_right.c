#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert right
 * @parent: parent
 * @value: value
 * Return: created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!New)
		return (NULL);
	New->n = value;
	New->parent = NULL;
	New->left = NULL;
	New->right = NULL;
	New->parent = parent;
	if (parent->right)
	{
		New->right = parent->right;
		(parent->right)->parent = New;
	}
	parent->right = New;
	return (parent->right);
}


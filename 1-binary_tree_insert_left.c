#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert left
 * @parent: parent
 * @value: value
 * Return: created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!New)
		return (NULL);
	New->n = value;
	New->parent = parent;
	New->left = NULL;
	New->right = NULL;
	if (parent->left)
	{
		New->left = parent->left;
		(parent->left)->parent = New;
	}
	parent->left = New;
	return (New);
}

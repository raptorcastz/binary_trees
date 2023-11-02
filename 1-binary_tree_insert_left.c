#include "binary_trees.h"

/**
 * binary_tree_insert_left -a function that inserts left child
 * @parent: the pointer to the node to insert the left child
 * @value: value to store in child
 * Return: pointer to the left child || NULL on failure or parent is NULL
 * if parent already has a left child, replace with new node and set
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *myl_child;

	if (parent == NULL)
		return (NULL);

	myl_child = malloc(sizeof(binary_tree_t));

	if (myl_child == NULL)
		return (NULL);

	myl_child->parent = parent;
	myl_child->n = value;
	myl_child->left = parent->left;
	myl_child->right = NULL;
	parent->left = myl_child;

	if (myl_child->left)
	{
		myl_child->left->parent = myl_child;
	}

	return (myl_child);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right -a function that inserts right child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer that retuuns NULL on failure || parent is NULL
 * If parent already has a right-child, the new node must take its place
 * and the old right-child must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *myr_child;

	if (parent == NULL)
		return (NULL);

	myr_child = malloc(sizeof(binary_tree_t));

	if (myr_child == NULL)
		return (NULL);

	myr_child->parent = parent;
	myr_child->n = value;
	myr_child->left = NULL;
	myr_child->right = parent->right;

	parent->right = myr_child;

	if (myr_child->right)
	{
		myr_child->right->parent = myr_child;
	}

	return (myr_child);
}
